#include <iostream>
using namespace std;

int main() {
	int T = 0;
	int a = 0, b = 0;
	long long sum = 1;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;

		for (int j = 0; j < b; j++) {
			sum = sum * a;
			if ((sum % 10) == 0) { sum = 10; }
			else if (sum == 0) { sum = 1; }
			else { sum = sum % 10; }
		 }

		cout << sum << endl;
		sum = 1;
	}

}


/*
슈도코드
int T // 테스트 개수 
int a,b // 테스트 케이스에 대한 정수 a^b
cin T
for(i 는 T만큼 반복){
	for(i는 b만큼 반복){
		sum=a를 곱해줌
		sum이 10번째일때 (ex:10 20 30)
		sum이 0일때
		sum이 나머지가 있을때
	}

	sum을 1로 초기화
}
*/