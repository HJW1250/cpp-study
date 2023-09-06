#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N=0, M=0, A=0;	// ���� ����, ���ϴ� Ƚ��, �迭 A
	int S[100001] = {};	// �չ迭 S

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> A;
		S[i] = S[i - 1] + A;	// �չ迭 �����
	}

	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";	//
	}
}

/*
�����ڵ�

�ε���	0	1	2	3	4
�迭 A	5	4	3	2	1
�չ迭S	5	9	12	14	15

�� �迭 S[i]=S[i-1]+A[i]
���� �� S[j]-S[i-1]	(j>=i)

int N(���� ����)
int M(���ϴ� Ƚ��)

cin>>���� ����>>���ϴ� Ƚ��

for(���� ����(N)��ŭ �ݺ�){
	cin>>�迭A�� ����
	�չ迭 �����
	S[i]=S[i-1]+A[i]
}

// ans �迭 ����
for(���ϴ� Ƚ��(M)��ŭ �ݺ�){
	���� �ޱ�(i, j)
	���� �� ���
	S[j]-S[i-1]	(j>=i) ���
}
//////�ð��ʰ� �ذ��//
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
// ���� ���� ����� �ӵ����� �ڵ� �Ǵ�
scanf()�� printf()���� C��Ÿ���� ����� �Լ��� ����ؾ���
cout ���� endl ����ϸ� �ȵǰ�, << "\n"; ����ؾ��� C��Ÿ�Ϸ�

/////////�ð��ʰ�///////////
// for�� �ٿ��� ������ ������ �ٷ� ���
for(���ϴ� Ƚ��(M)��ŭ �ݺ�){
	���� �ޱ�(i, j)
	���� �� ���
	ans[M]=S[j]-S[i-1]	(j>=i)
	ans[M]���
}

//////////////////�ð��ʰ�////////////
for(���ϴ� Ƚ��(M)��ŭ �ݺ�){
	���� �ޱ�(i, j)
	���� �� ���
	ans[M]=S[j]-S[i-1]	(j>=i)
}

for(���ϴ� Ƚ��(M)��ŭ �ݺ�){
	ans[M]���
}

*/