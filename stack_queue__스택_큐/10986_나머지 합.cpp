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
�����ڵ�
�Է�
5 3
1 2 3 1 2
���
7

����� ��
(i = 1) �� ��� {
	j = 1		1			% 3 = 1	->	cnt = 0
	j = 2		1+2			% 3 = 0 ->	cnt = 1
	j = 3		1+2+3		% 3 = 0 ->	cnt = 1
	j = 4		1+2+3+1		% 3 = 1 ->	cnt = 0
	j = 5		1+2+3+1+2	% 3 = 0 ->	cnt = 1
									total cnt = 3
}

(i = 2) �� ��� {
	j = 2		2			% 3 = 2 ->	cnt = 0
	j = 3		2+3			% 3 = 2 ->	cnt = 0
	j = 4		2+3+1		% 3 = 0 ->	cnt = 1
	j = 5		2+3+1+2		% 3 = 2 ->	cnt = 0
									total cnt = 1
}

(i = 3) �� ��� {
	j = 3		3			% 3 = 0 ->	cnt = 1
	j = 4		3+1			% 3 = 1 ->	cnt = 0
	j = 5		3+1+2		% 3 = 0 ->	cnt = 1
									total cnt = 2
}

(i = 4) �� ��� {
	j = 4		1			% 3 = 1 ->	cnt = 0
	j = 5		1+2			% 3 = 0 ->	cnt = 1
									total cnt = 1
}

(i = 5) �� ��� {
	j = 5		5			% 3 = 2 ->	cnt = 0
									total cnt = 0
}
/////////// �ð��ʰ�
// ���� : ���� for���̶� �׸���... �չ迭�� �������
for (ù��° �Է¸�ŭ �ݺ� (i)){
	for (ù��° �Է¸�ŭ �ݺ� (j)){

	}
}

�Ʒ� �չ迭�� �ٽ� �ڵ�

�չ迭
	����		:	1,1		1,2		1,3		1,4		1,5
	��			:	1		3		6		7		9
������ �迭(%)	:	1		0		0		1		0	-> 3��

	����		:	2,2		2,3		2,4		2,5
	��			:	2		5		6		8
������ �迭(%)	:	2		2		0		2	-> 1��

	����		:	3,3		3,4		3,5
	��			:	3		4		6
������ �迭(%)	:	0		1		0	-> 2��

	����		:	4,4		4,5
	��			:	1		3
������ �迭(%)	:	1		0	-> 1��

	����		:	5,5
	��			:	2
������ �迭(%)	:	2	-> 0��

N(���� ����), M(������������ϴ� ��)
S(�չ迭), C(���� �������� ������ �ε����� ī��Ʈ�ϴ� �迭)

for(i�� 1���� N����){
	S[i]=S[i-1]+A[i] �չ迭 ����
}
for(i�� 0���� N����){
	remainder = S[i] % M �չ迭 M���� ���� �������� ����
	if(�������� 0�̸�){
		cnt =+ 1 ī���͸� 1 ������Ŵ
	}
}
for(i�� 0���� M����){
	C[i]
}

*/