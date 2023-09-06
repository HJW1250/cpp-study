#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N=0, M=0, A=0;	// 수의 개수, 구하는 횟수, 배열 A
	int S[100001] = {};	// 합배열 S

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> A;
		S[i] = S[i - 1] + A;	// 합배열 만들기
	}

	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";	//
	}
}

/*
슈도코드

인덱스	0	1	2	3	4
배열 A	5	4	3	2	1
합배열S	5	9	12	14	15

합 배열 S[i]=S[i-1]+A[i]
구간 합 S[j]-S[i-1]	(j>=i)

int N(수의 개수)
int M(구하는 횟수)

cin>>수의 개수>>구하는 횟수

for(수의 개수(N)만큼 반복){
	cin>>배열A에 저장
	합배열 만들기
	S[i]=S[i-1]+A[i]
}

// ans 배열 제거
for(구하는 횟수(M)만큼 반복){
	범위 받기(i, j)
	구간 합 계산
	S[j]-S[i-1]	(j>=i) 출력
}
//////시간초과 해결법//
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
// 위와 같은 입출력 속도관련 코드 또는
scanf()나 printf()같은 C스타일의 입출력 함수를 사용해야함
cout 이후 endl 사용하면 안되고, << "\n"; 사용해야함 C스타일로

/////////시간초과///////////
// for문 줄여서 구간합 구한후 바로 출력
for(구하는 횟수(M)만큼 반복){
	범위 받기(i, j)
	구간 합 계산
	ans[M]=S[j]-S[i-1]	(j>=i)
	ans[M]출력
}

//////////////////시간초과////////////
for(구하는 횟수(M)만큼 반복){
	범위 받기(i, j)
	구간 합 계산
	ans[M]=S[j]-S[i-1]	(j>=i)
}

for(구하는 횟수(M)만큼 반복){
	ans[M]출력
}

*/