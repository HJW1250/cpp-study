#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int A[1000];
	long max = 0;
	long sum = 0;
	double result = 0;

	cin >> N;	// 과목 수

	for (int i = 0; i < N; i++) {
		cin >> A[i];	// 점수
	}

	for (int i = 0; i < N; i++) {
		if (A[i] > max) {
			max = A[i];	// 최고점
		}
		sum = sum + A[i];	// 총점
	}

	result = sum * 100.0 / max / N;
	cout << result << endl;
}

/*
슈도코드
	계산식
	{(A/M*100)+(B/M*100)+(C/M*100)}/3
	=(A+B+C)*100/M/3
	=>(총점)*100/최고점/과목개수

int N(시험을 본 과목의 개수)
int A[](과목 데이터 저장)

for(배열 길이만큼 반복){
	scanf(점수 데이터 저장)
}

long max(최고점)
long sum(총점)

for(배열 길이만큼 반복){
	//최고점 점수 판별하여 저장
	if(배열(길이)>max){
		max=배열(길이)
	}
	//총점 계산
	sum=sum+배열
}

계산식
출력

*/