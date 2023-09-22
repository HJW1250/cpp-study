#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << "\n";
    }
}

/*
슈도코드

N // 정렬할 수 개수
A // 수 저장 배열
for(i는 0부터 N-1까지){
    for(j는 0부터 N-1-i까지){
        현재 배열 A값보다 한 칸 오른쪽 배열값이 더 작으면 두 수 위치 교체
    }
}
배열A 출력
*/