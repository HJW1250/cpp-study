#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> S(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < N; i++) { //삽입 정렬
        int insert_point = i;
        int insert_value = A[i];
        for (int j = i - 1; j >= 0; j--) {
            if (A[j] < A[i]) {
                insert_point = j + 1;
                break;
            }
            if (j == 0) {
                insert_point = 0;
            }
        }
        for (int j = i; j > insert_point; j--) {
            A[j] = A[j - 1];
        }
        A[insert_point] = insert_value;
    }

    S[0] = A[0]; //합배열 만들기 
    for (int i = 1; i < N; i++) {
        S[i] = S[i - 1] + A[i];
    }

    int sum = 0; //합배열 총합 구하기
    for (int i = 0; i < N; i++) {
        sum = sum + S[i];
    }

    cout << sum;

}

/*
슈도코드

N // 사람의 수
A // 자릿수별로 구분하여 저장한 배열
S // 합 배열 A에서 각 사람의 인출 완료를 위해 필요한 시간을 저장

for(N만큼 반복){
	배열 A 저장
}
for(i를 N만큼 반복){
	for(j를 i-1 ~ 0까지 뒤에서부터 반복){
		현재 범위에서 삽입 위치 찾기
	}
	for(j를 i ~ instert_point+1까지 뒤에서부터 반복){
		삽입을 위해 삽입위치부터 i까지 데이터를 한칸씩 뒤로 밀기
	}
	삽입 위치에 현재 데이터 삽입하기
}
for(N만큼 반복){
	배열 A를 통한 합 배열 S 만들기
}
배열 S 각 데이터의 값을 모두 합하여 결과 출력

*/