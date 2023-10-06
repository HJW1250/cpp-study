#include <iostream>

using namespace std;

int arr[101] = { 0, };

void swap(int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

int main() {
    int N, M;
    int a, b;

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        swap(a, b);
    }

    for (int i = 1; i <= N; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}

/*
�����ڵ�
N������ �� �ٱ��Ͽ� �ش��ϴ� ���ڷ� �ʱ�ȭ
swap �޼ҵ带 ����� �ٱ��� ���� ��ȣ�� �ٲ��� ���

swap�Լ���
temp�� ������ ����
a�ε����� b �ε��� �� ����
b�ε����� a�ε����� �������� temp ����

*/