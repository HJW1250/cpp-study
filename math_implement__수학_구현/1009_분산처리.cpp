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
�����ڵ�
int T // �׽�Ʈ ���� 
int a,b // �׽�Ʈ ���̽��� ���� ���� a^b
cin T
for(i �� T��ŭ �ݺ�){
	for(i�� b��ŭ �ݺ�){
		sum=a�� ������
		sum�� 10��°�϶� (ex:10 20 30)
		sum�� 0�϶�
		sum�� �������� ������
	}

	sum�� 1�� �ʱ�ȭ
}
*/