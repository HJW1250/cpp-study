#include <iostream>
#include <queue>
using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if (first_abs == second_abs)
            return o1 > o2;// 절대값이 같은 경우 음수 우선 정렬
        else
            return first_abs > second_abs;// 절대값을 기준으로 정렬
    }
};

int main()
{

    // 우선순위 큐 선언방식: <자료형, 구현체, 비교함수명>
    priority_queue<int, vector<int>, compare> myQ;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int request;
        cin >> request;
        if (request == 0) {
            if (myQ.empty()) {
                cout << "0\n";
            }
            else {
                cout << myQ.top() << '\n';
                myQ.pop();
            }
        }
        else {
            myQ.push(request);
        }
    }
}

/*
슈도코드
예제	큐
18								//입력갯수
1		[1]
-1		[-1][1]
0		[1]						//큐의 top 출력하고 pop
0								//큐의 top 출력하고 pop
0								//큐가 비어있어 0 출력
1		[1]
1		[1][1]
-1		[1][1][-1]				//절댓값 기준 정렬
-1		[1][1][-1][-1]			//절댓값 기준 정렬
2		[2][1][1][-1][-1]
-2		[2][-2][1][1][-1][-1]	//절댓값 기준 정렬
0		[2][-2][1][1][-1]		//큐의 top 출력하고 pop
0		[2][-2][1][1]			//큐의 top 출력하고 pop
0		[2][-2][1]				//큐의 top 출력하고 pop
0		[2][-2]					//큐의 top 출력하고 pop
0		[2]						//큐의 top 출력하고 pop
0								//큐의 top 출력하고 pop
0								//큐가 비어있어 0 출력

N // 질의 요청 개수
myQ // 데이터 저장 우선순위 큐
절댓값 기준으로 정렬되도록 설정
단, 절댓값이 같다면 음수 우선 정렬

for(N만큼 반복){
	요청이 0일 때 : 큐가 비었으면 0 출력, 아니면 큐의 top 출력하고 pop
	요청이 1일 때 : 새로운 데이터를 우선순위 큐에 push
}

*/