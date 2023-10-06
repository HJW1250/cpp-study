#include <iostream>

using namespace std;

int main() {

	int N, M, a, b;
	int arr[100];
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		arr[i] = i;

	while (M--) {
		cin >> a >> b;

		for (int i = 0; i <= (b - a) / 2; i++) {
			swap(arr[a + i], arr[b - i]);
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}

/*
1������ N������ ��ȣ�� ������� ��� �ٱ��ϰ� ����

M���� �ٿ� ���� a b�� �Էµȴ�. a������ b������ �ٱ����� ������ ������ ��

1������ N������ �ٱ��Ͽ��� ��� ��ȣ�� ����ϸ� ��
*/