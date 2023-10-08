#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void quickSort(vector<int>& A, int S, int E, int K);
int partition(vector<int>& A, int S, int E);
void swap(vector<int>& A, int i, int j);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    quickSort(A, 0, N - 1, K - 1);
    cout << A[K - 1];
}

void quickSort(vector<int>& A, int S, int E, int K) {
    int pivot = partition(A, S, E);
    if (pivot == K)// K번째 수가 pivot이면 더이상 구할 필요 없음
        return;
    else if (K < pivot) // K가 pivot보다 작으면 왼쪽 그룹만 정렬 수행하기
        quickSort(A, S, pivot - 1, K);
    else // K가 pivot보다 크면 오른쪽 그룹만 정렬 수행하기
        quickSort(A, pivot + 1, E, K);
}
int partition(vector<int>& A, int S, int E) {
    if (S + 1 == E) {
        if (A[S] > A[E])swap(A, S, E);
        return E;
    }
    int M = (S + E) / 2;
    swap(A, S, M); // 중앙값을 1번째 요소로 이동하기
    int pivot = A[S];
    int i = S + 1, j = E;
    while (i <= j) {
        while (j >= S + 1 && pivot < A[j]) {   //피벗보다 작은 수가 나올때까지 j--
            j--;
        }
        while (i <= E && pivot > A[i]) {  //피벗보다 큰 수가 나올 까지 i++
            i++;
        }

        if (i < j) {
            swap(A, i++, j--);  // 찾은 i와 j를 교환하기
        }
        else {
            break;
        }
    }
    // i == j 피벗의 값을 양쪽으로 분리한 가운데에 오도록 설정하기
    A[S] = A[j];
    A[j] = pivot;
    return j;
}
void swap(vector<int>& A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

/*
슈도코드

N // 숫자의 개수
K // K번째 수
A // 숫자 데이터 저장 배열

for(N만큼 반복){
    배열 A 저장
}

퀵 정렬 실행
K번째 데이터 출력

// 함수 구현
퀵 정렬 함수(시작,종료,K){
    피벗 구하기 함수(시작 인덱스, 종료 인덱스)
    if(K == 피벗) break;
    else if(K < 피벗) 퀵 정렬 수행(시작 인덱스, 피벗 - 1, K)
    else 퀵 정렬 수행(피벗 + 1, 종료 인덱스, K)
}

피벗 구하기 함수(시작 인덱스, 종료 인덱스){
    데이터가 2개인 경우 바로 비교하여 정렬
    M // 중앙값
    중앙값을 시작위치와 Swap
    pivot을 시작위치 값 A[S]로 저장
    i // 시작점
    j // 종료점

    while(i<=j){
        피벗보다 큰 수가 나올 때까지 i 증가
        피벗보다 작은 수가 나올 때까지 j 감소
        찾은 i와 j 데이터를 swap
    }

    피벗 데이터를 나눈 두 그롭위 경계 index에 저장하기
    경계 index 반환   
}

*/