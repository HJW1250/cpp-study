#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	int sum1 = 0, sum2 =0, sum3 = 0;

	cin >> N >> M;
	int N1 = N;
	int N2 = N;
	int N3 = N;
	vector<int> pack(M, 0);
	vector<int> each(M, 0);
	vector<int> result(3, 0);

	for (int i = 0; i < M; i++) {
		cin >> pack[i] >> each[i];
	}

	sort(pack.begin(), pack.end());
	sort(each.begin(), each.end());

	while (true) {
		if (N1 == 0) {	break;	}
		else if (N1 >= 6) {
			sum1 = sum1 + pack[0];
			N1 = N1 - 6;
		}
		else if (N1 < 6) {
			sum1 = sum1 + each[0];
			N1 = N1 - 1;
		}
	}

	while (true) {
		if (N2 < 0) {	break;	}
		sum2 = sum2 + pack[0];
		N2 = N2 - 6;
	}

	while (true) {
		if (N3 == 0) { break; }
		sum3 = sum3 + each[0];
		N3 = N3 - 1;
	}

	result[0] = sum1;	result[1] = sum2;	result[2] = sum3;
	sort(result.begin(), result.end());
	cout << result[0];
}

/*
슈도코드

N // 끊어진 기타줄 수
M // 기타줄 브랜드 수
sum =0 // 지불된 가격

cin>>N>>M;	// 갯수 입력받음

int pack[M]={0,};	// 패키지 가격 최저가를 찾기위한 내림차순
int each[M]={0,};	// 낱개 가격 최저가를 찿기위한 내림차순

for(i를 M만큼 반복){
	cin>>pack[i]>>each[i];
}

//최저가 찾기
sort(pack.begin(), pack.end());
sort(each.begin(), each.end());

while(true){
	if(N=0 일때){
		break;
	}
	else if(N>6 일떄){
		sum=sum+pack[0]
	}
	else if(N<6 일때){
		sum=sum+each[0]
	}
}

cout<<num;


*/