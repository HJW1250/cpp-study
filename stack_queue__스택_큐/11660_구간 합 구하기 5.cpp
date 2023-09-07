#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> A[i][j];
			// ���� �� ���ϱ�
			D[i][j] = D[i][j - 1] + D[i - 1][j] - D[i - 1][j - 1] + A[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		// ���� �� �迭�� ���ǿ� �亯�ϱ�
		int result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1];
		cout << result << "\n";
	}
}

/*
�����ڵ�

���ڹ迭
0	1	2	3	4
1	1	2	3	4
2	2	3	4	5
3	3	4	5	6
4	4	5	6	7

�չ迭
0	1	2	3	4
1	1	3	6	10
2	3	8	15	24
3	6	15	27	42
4	10	24	42	64

��i D[i][1]=D[i-1][1]+A[i][1]
��j D[1][j]=D[i][j-1]+A[1][j]

��+��
1	2
2	3
D[2][2]=2+2-1+3
	=D[2][1]+D[1][2]-D[1][1]+A[2][2]

D[i][j]=D[i][j-1]+D[i-1][j]-D[i-1][j-1]+A[i][j];

N(�迭 ũ��), M(���� ��)
A(���� �迭), D(�� �迭)

// ����for������ �չ迭 ����
for(N��ŭ �ݺ�){
		for(N��ŭ �ݺ�){
			D[i][j](��+��)
		}
	}
for(M��ŭ �ݺ�){
		���� ����̶� ���
	}
*/