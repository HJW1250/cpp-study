#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int count = 0;
	int i = 0;
	int j = N - 1;

	while (i < j) {
		if (A[i] + A[j] < M) {
			i++;
		}
		else if (A[i] + A[j] > M) {
			j--;
		}
		else {
			count++;
			i++;
			j--;
		}
	}
	cout << count << "\n";
}

/*
슈도코드
int N	// 재료의 개수
int M	// 갑옷이 완성되는 번호의 합
vector<int> A(N,0)	// 재료들

for(N만큼 반복){
	재료 배열 저장
}
sort 재료 배열 정렬

while(i<j){
	if(재료 합<M) 작은 번호 재료를 한 칸 뒤로 변경
	else if(재료 합 > M) 큰 번호 재료를 한 칸 앞으로 변경
	else 경우의 수 증가, 양쪽 index 각각 변경
}

경우의 수 출력

*/