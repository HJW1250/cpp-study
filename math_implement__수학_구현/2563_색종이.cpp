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
슈도코드
n // 색종이 수
x // 가로길이
y // 세로길이

100x100 사이즈의 배열을 만들어 도화지라고 가정한 후
0이면 공백 1이면 색종이 부분이라고 판단하여 카운트
*/