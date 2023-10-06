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
슈도코드
N번까지 각 바구니에 해당하는 숫자로 초기화
swap 메소드를 사용해 바구니 안의 번호를 바꾼후 출력

swap함수는
temp에 기존값 저장
a인덱스에 b 인덱스 값 대입
b인덱스에 a인덱스의 기존값인 temp 대입

*/