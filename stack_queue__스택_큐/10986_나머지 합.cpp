#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<long> S(N, 0);
	vector<long> C(M, 0);
	long answer = 0;
	cin >> S[0];

	for (int i = 1; i < N; i++) {
		int temp = 0;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}
	for (int i = 0; i < N; i++) {
		int remainder = S[i] % M;
		if (remainder == 0) {
			answer++;
		}
		C[remainder]++;
	}
	for (int i = 0; i < M; i++) {
		if (C[i] > 1) {
			answer = answer + (C[i] * (C[i] - 1) / 2);
		}
	}
	cout << answer << "\n";
}

/*
슈도코드
입력
5 3
1 2 3 1 2
출력
7

경우의 수
(i = 1) 일 경우 {
	j = 1		1			% 3 = 1	->	cnt = 0
	j = 2		1+2			% 3 = 0 ->	cnt = 1
	j = 3		1+2+3		% 3 = 0 ->	cnt = 1
	j = 4		1+2+3+1		% 3 = 1 ->	cnt = 0
	j = 5		1+2+3+1+2	% 3 = 0 ->	cnt = 1
									total cnt = 3
}

(i = 2) 일 경우 {
	j = 2		2			% 3 = 2 ->	cnt = 0
	j = 3		2+3			% 3 = 2 ->	cnt = 0
	j = 4		2+3+1		% 3 = 0 ->	cnt = 1
	j = 5		2+3+1+2		% 3 = 2 ->	cnt = 0
									total cnt = 1
}

(i = 3) 일 경우 {
	j = 3		3			% 3 = 0 ->	cnt = 1
	j = 4		3+1			% 3 = 1 ->	cnt = 0
	j = 5		3+1+2		% 3 = 0 ->	cnt = 1
									total cnt = 2
}

(i = 4) 일 경우 {
	j = 4		1			% 3 = 1 ->	cnt = 0
	j = 5		1+2			% 3 = 0 ->	cnt = 1
									total cnt = 1
}

(i = 5) 일 경우 {
	j = 5		5			% 3 = 2 ->	cnt = 0
									total cnt = 0
}
/////////// 시간초과
// 원인 : 이중 for문이라 그른가... 합배열을 사용하자
for (첫번째 입력만큼 반복 (i)){
	for (첫번째 입력만큼 반복 (j)){

	}
}

아래 합배열로 다시 코딩

합배열
	구간		:	1,1		1,2		1,3		1,4		1,5
	합			:	1		3		6		7		9
나머지 배열(%)	:	1		0		0		1		0	-> 3개

	구간		:	2,2		2,3		2,4		2,5
	합			:	2		5		6		8
나머지 배열(%)	:	2		2		0		2	-> 1개

	구간		:	3,3		3,4		3,5
	합			:	3		4		6
나머지 배열(%)	:	0		1		0	-> 2개

	구간		:	4,4		4,5
	합			:	1		3
나머지 배열(%)	:	1		0	-> 1개

	구간		:	5,5
	합			:	2
나머지 배열(%)	:	2	-> 0개

N(수열 개수), M(나누어떨어져야하는 수)
S(합배열), C(같은 나머지를 가지는 인덱스를 카운트하는 배열)

for(i는 1부터 N까지){
	S[i]=S[i-1]+A[i] 합배열 저장
}
for(i는 0부터 N까지){
	remainder = S[i] % M 합배열 M으로 나눈 나머지값 저장
	if(나머지가 0이면){
		cnt =+ 1 카운터를 1 증가시킴
	}
}
for(i는 0부터 M까지){
	C[i]
}

*/