#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int count = 0;
	int i = 0;
	int j = N - 1;

	while (i < j) {
		if (A[i] + A[j] < M) {
			i++;
		}
		else if (A[i] + A[j] > M) {
			j--;
		}
		else {
			count++;
			i++;
			j--;
		}
	}
	cout << count << "\n";
}

/*
�����ڵ�
int N	// ����� ����
int M	// ������ �ϼ��Ǵ� ��ȣ�� ��
vector<int> A(N,0)	// ����

for(N��ŭ �ݺ�){
	��� �迭 ����
}
sort ��� �迭 ����

while(i<j){
	if(��� ��<M) ���� ��ȣ ��Ḧ �� ĭ �ڷ� ����
	else if(��� �� > M) ū ��ȣ ��Ḧ �� ĭ ������ ����
	else ����� �� ����, ���� index ���� ����
}

����� �� ���

*/