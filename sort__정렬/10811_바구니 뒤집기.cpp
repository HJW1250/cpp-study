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
1번부터 N번까지 번호가 순서대로 담긴 바구니가 있음

M개의 줄에 걸쳐 a b가 입력된다. a번부터 b번까지 바구니의 순서를 뒤집은 후

1번부터 N번까지 바구니에에 담긴 번호를 출력하면 됨
*/