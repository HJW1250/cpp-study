#include <iostream>
using namespace std;

int main() {
	int num;
	int rm[42] = { 0 };
	int count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		rm[num % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (rm[i] != 0)
			count++;
	}
	cout << count << endl;
}

/*
슈도코드

1 -> 1 % 42 = 1
2 -> 2 % 42 = 2
3 -> 3 % 42 = 3
4 -> 4 % 42 = 4

arr	0	1	2	3	4
		+1	+1	+1	+1

arr[i] = 나머지가 i가 나온 갯수
		== 0이 아닌 arr[i]의 수
*/