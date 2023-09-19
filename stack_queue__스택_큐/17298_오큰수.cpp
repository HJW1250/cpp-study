#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> ans(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    stack <int> myStack;
    myStack.push(0);
    for (int i = 1; i < N; i++) {
        //스택 비어있지 않고 현재 수열이 스택 TOP인덱스 가르키는 수열보다 크면
        while (!myStack.empty() && A[myStack.top()] < A[i]) {
            ans[myStack.top()] = A[i];  //정답 배열에 오큰수를 현재 수열로 저장하기
            myStack.pop();
        }
        myStack.push(i); //신규데이터 push  
    }
    while (!myStack.empty()) {
        // 반복문을 다 돌고 나왔는데 스택이 비어있지 않다면 빌 때 까지
        ans[myStack.top()] = -1;
        myStack.pop();
    };
    for (int i = 0; i < N; i++) {   // 출력
        cout << ans[i] << " ";
    }
}

/*
슈도코드

스택이 채웨져 있고 A[index] > A[top]인 경우 pop한 인덱스를 이용하여 정답 수열에 오큰수를 저장
pop은조건을 만족하는동안 계속 반복
현재 인덱스를 스택에 push하고 다음 인덱스로 넘어감
위 과정을 수열 길이만큼 반복한 다음 현재 스택에 남아있는 인덱스에 -1을 저장

[0]	[1]	[2]	[3]
3	5	2	7

비어있음 [0]push()
스택	[0]

[0]<5,	[1]push(),	오큰수에 [1]pop()
스택	[0][1]
오큰수	[0]	[1]	[2]	[3]
		5
스택	[1]

[1]>2	[2]push()
스택	[1][2]

[2]<7, [1]<7	오큰수에 [3]pop()
스택	[1][2][3]
오큰수	[0]	[1]	[2]	[3]
		5
스택	[2][3]
오큰수	[0]	[1]	[2]	[3]
		5	7
스택	[3]
오큰수	[0]	[1]	[2]	[3]
		5	7	7
스택	
오큰수	[0]	[1]	[2]	[3]
		5	7	7	-1

N(수열 개수), A(수열 배열), ans(정답 배열)
수열 배열 채우기
최초 스택 초기화(0 push)

for(N만큼 반복){
	while(스택이 비지 않고 현재 수열값이 top에 해당하는 수열보다 클때까지){
		정답배열에 오큰수를 현재 수열로 저장
		스택 pop 수행
	}
	현재 수열을 스택에 push
}
while(스택이 빌 때까지){
	스택에 있는 인덱스에 대하여 정답 배열에 -1 저장
	스택 pop 수행
}
정답배열 출력

*/