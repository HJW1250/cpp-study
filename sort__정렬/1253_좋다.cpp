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
�����ڵ�
���ĵ� �迭
1	2	3	4	5	6	7	8	9	10
�� ������ i,j�� �迭 ���ʳ��� ��ġ��Ű�� Ž�� ����

k=1�϶�
i�� j�� ���������� �μ��� ���� 1 �Ǵ� ��찡 ���� ����

k=2�϶�
i�� j�� ���������� �μ��� ���� 2 �Ǵ� ��찡 ���� ����

k=3�϶�
1	2	3	4	5	6	7	8	9	10
i	j	k
i�� j�� 1,2 �϶� �μ��� ���� 3

k=4�϶�
1	2	3	4	5	6	7	8	9	10
i		j	k
i�� j�� 1,3 �϶� �μ��� ���� 4


k=5�϶�
1	2	3	4	5	6	7	8	9	10
i			j	k
i�� j�� 1,4 �϶� �μ��� ���� 5

k=6�϶�
1	2	3	4	5	6	7	8	9	10
i				j	k

int N // �迭�� ������ ����
int A // ������ ���� �迭

for(N��ŭ �ݺ�){
	�迭 A�� ������ ����
}
�迭 A �����ϱ�

for(N��ŭ �ݺ�){
	���� �ʱ�ȭ(ã���� �ϴ� �� find =A[K], ������ i, ������ j)
	while(i > j){
		if(A[i] + A[j] == find){
			�� ������ i j�� k�� �ƴ� ��� �ᱣ���� �ݿ� �� while �� ����
			�� ������ i j�� k�� ���� ��� ������ ���� �� ��� ����
			}
		else if(A[i] + A[j] < find){
			������ i ����
		}
		else ������ j ����
	}
}

*/