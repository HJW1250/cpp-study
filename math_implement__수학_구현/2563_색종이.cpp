#include<iostream>

using namespace std;
int main() {
    int n, x, y, cnt = 0;
    int a[100][100] = { 0,{0,}};

    cin >> n;
    while (n--) {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!a[i][j]) {
                    cnt++;
                    a[i][j] = 1;
                }
            }
        }
    }
    cout << cnt;
}

/*
�����ڵ�
n // ������ ��
x // ���α���
y // ���α���

100x100 �������� �迭�� ����� ��ȭ����� ������ ��
0�̸� ���� 1�̸� ������ �κ��̶�� �Ǵ��Ͽ� ī��Ʈ
*/