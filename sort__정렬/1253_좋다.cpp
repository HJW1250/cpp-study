#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());
	int result = 0;
	for (int k = 0; k < N; k++) {
		long find = A[k];
		int i = 0;
		int j = N - 1;

		while (i < j) {
			if (A[i] + A[j] == find) {
				if (i != k && j != k) {
					result++;
					break;
				}
				else if (i == k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
			}
			else if (A[i] + A[j] < find) {
				i++;
			}
			else {
				j--;
			}
		}
	}
	cout << result << "\n";
}

/*
슈도코드
정렬된 배열
1	2	3	4	5	6	7	8	9	10
투 포인터 i,j를 배열 양쪽끝에 위치시키고 탐색 수행

k=1일때
i와 j가 만날때까지 두수의 합이 1 되는 경우가 없어 종료

k=2일때
i와 j가 만날때까지 두수의 합이 2 되는 경우가 없어 종료

k=3일때
1	2	3	4	5	6	7	8	9	10
i	j	k
i와 j가 1,2 일때 두수의 합이 3

k=4일때
1	2	3	4	5	6	7	8	9	10
i		j	k
i와 j가 1,3 일때 두수의 합이 4


k=5일때
1	2	3	4	5	6	7	8	9	10
i			j	k
i와 j가 1,4 일때 두수의 합이 5

k=6일때
1	2	3	4	5	6	7	8	9	10
i				j	k

int N // 배열의 데이터 개수
int A // 데이터 저장 배열

for(N만큼 반복){
	배열 A에 데이터 저장
}
배열 A 정렬하기

for(N만큼 반복){
	변수 초기화(찾고자 하는 값 find =A[K], 포인터 i, 포인터 j)
	while(i > j){
		if(A[i] + A[j] == find){
			두 포인터 i j가 k가 아닐 경우 결괏값에 반영 및 while 문 종료
			두 포인터 i j가 k가 맞을 경우 포인터 변경 및 계속 수행
			}
		else if(A[i] + A[j] < find){
			포인터 i 증가
		}
		else 포인터 j 감소
	}
}

*/