#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int A[1000];
	long max = 0;
	long sum = 0;
	double result = 0;

	cin >> N;	// ���� ��

	for (int i = 0; i < N; i++) {
		cin >> A[i];	// ����
	}

	for (int i = 0; i < N; i++) {
		if (A[i] > max) {
			max = A[i];	// �ְ���
		}
		sum = sum + A[i];	// ����
	}

	result = sum * 100.0 / max / N;
	cout << result << endl;
}

/*
�����ڵ�
	����
	{(A/M*100)+(B/M*100)+(C/M*100)}/3
	=(A+B+C)*100/M/3
	=>(����)*100/�ְ���/���񰳼�

int N(������ �� ������ ����)
int A[](���� ������ ����)

for(�迭 ���̸�ŭ �ݺ�){
	scanf(���� ������ ����)
}

long max(�ְ���)
long sum(����)

for(�迭 ���̸�ŭ �ݺ�){
	//�ְ��� ���� �Ǻ��Ͽ� ����
	if(�迭(����)>max){
		max=�迭(����)
	}
	//���� ���
	sum=sum+�迭
}

����
���

*/