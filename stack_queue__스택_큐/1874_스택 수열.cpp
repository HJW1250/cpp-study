#include <iostream>
#include<vector>
#include <stack>

using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<char> resultV;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    stack <int> myStack;
    int num = 1; // 오름차순 수
    bool result = true;
    for (int i = 0; i < A.size(); i++) {
        int su = A[i]; // 현재 수열의 수
        if (su >= num) { //현재 수열 값 >= 오름차순 자연수 : 값이 같아 질 때까지 push()수행
            while (su >= num) { // push()
                myStack.push(num++);
                resultV.push_back('+');
            }
            myStack.pop();
            resultV.push_back('-');
        }
        else {  //현재 수열 값 < 오름차순 자연수: pop()을 수행하여 수열 원소를 꺼냅니다
            int n = myStack.top();
            myStack.pop();
            // 스택의 가장 위의 수가 만들어야 하는 수열의 수 보다 크다면 수열 출력 불가능
            if (n > su) {
                cout << "NO";
                result = false;
                break;
            }
            else {
                resultV.push_back('-');
            }
        }
    }
    if (result) {
        for (int i = 0; i < resultV.size(); i++)
        {
            cout << resultV[i] << '\n';
        }
    }
}

/*
슈도코드

N// 수열개수
A// 수열 저장 배열
result// 결과 저장 배열

수열 저장 배열에 데이터 저장

for(N만큼 반복){
    if(현재 수열 값 >= 오름차순 자연수){
        while(값이 같아질 때까지){
            push()
            + 저장
        }
        마지막값을 pop()
        - 저장
    }
    else{
        스택의 가장 위의 값 pop()
        if(스택 pop 결과값>수열의 수){
            NO 출력
        }
        else{
            - 저장
        }
    }
}
if(-값을 출력한 적이 없으면){
    저장한 값 출력
}

*/