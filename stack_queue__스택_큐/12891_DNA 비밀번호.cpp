#include <iostream>
#include<vector>

using namespace std;

int checkArr[4];
int myArr[4];
int checkSecret = 0;

void Add(char c) {
	switch(c) {
	case'A':
		myArr[0]++;
		if (myArr[0] == checkArr[0])
			checkSecret++;
		break;
	}
	switch (c) {
	case'C':
		myArr[1]++;
		if (myArr[1] == checkArr[1])
			checkSecret++;
		break;
	}
	switch (c) {
	case'G':
		myArr[2]++;
		if (myArr[2] == checkArr[2])
			checkSecret++;
		break;
	}
	switch (c) {
	case'T':
		myArr[3]++;
		if (myArr[3] == checkArr[3])
			checkSecret++;
		break;
	}
}

void Remove(char c) {
	switch (c) {
	case'A':
		if (myArr[0] == checkArr[0])
			checkSecret--;
		myArr[0]--;
		break;
	case'C':
		if (myArr[1] == checkArr[1])
			checkSecret--;
		myArr[1]--;
		break;
	case'G':
		if (myArr[2] == checkArr[2])
			checkSecret--;
		myArr[2]--;
		break;
	case'T':
		if (myArr[3] == checkArr[3])
			checkSecret--;
		myArr[3]--;
		break;
	}

}

int main() {
	int S, P;
	int result = 0;
	string A;

	cin >> S >> P;
	cin >> A;

	for (int i = 0; i < 4; i++) {
		cin >> checkArr[i];
		if (checkArr[i] == 0) {
			checkSecret++;
		}
	}

	for (int i = 0; i < P; i++) {	// �ʱ� P�κ� ���ڿ� ó��
		Add(A[i]);
	}
	if (checkSecret == 4) {
		result++;
	}
	// �����̵� ������ ó�� �κ�
	for (int i = P; i < S; i++) {
		int j = i - P;
		Add(A[i]);
		Remove(A[j]);
		// 4�ڸ� ���� ���� ũ�Ⱑ ��� �����Ǿ��� ���� ��ȿ�� ��й�ȣ
		if (checkSecret == 4) {
			result++;
		}
	}
	cout << result << "\n";
	
}

/*
�����ڵ�
checkArr	// ��й�ȣ üũ �迭
myArr		// ���� ���� �迭
checkSecret // �� ���� ���ڿ� ���� ������ �����ߴ��� �Ǵ��ϴ� ����
S // ���ڿ� ũ��
P // �κ� ���ڿ� ũ��
A // ���ڿ� ������
P // ���� 0 ~ (P-1)��ŭ �迭 S�� �����ϰ� ��ȿ�� ��й�ȣ���� �Ǵ��ϱ�

for(i�� P���� S���� �ݺ�){
	// ��ĭ�� �̵��ϸ鼭 ���ŵǴ� ���ڿ��� ���� ������ ���ڿ��� ���� ó��
	j����(i-P)
	Add(A[i])
	Remove(A[j])
	���� �κ� ���ڿ��� ��ȿ�� ��й�ȣ����(checkSecret==4)�Ǵ��Ͽ� �ᱣ�� ������Ʈ
}
�ᱣ�� ���

//���� �Լ�
Add(���� ���ϱ� �Լ�){
	���� ���� ���ڿ� ���� myArr ������Ʈ �� checjSecret�� ����
}
Remove(���� ���� �Լ�){
	���ŵǴ� ���ڿ� ���� myArr ������Ʈ �� checkSecret�� ����
}

// �Լ��� ����� ����ϸ� ���� ���ϰ� ���� ����
S = ���ڿ�(A,C,G,T ��) ����
P = ��й�ȣ�� ����� �κй��ڿ� ����
DNA_str = ���Ƿ� ���� ���ڿ�
str[4] = {A,C,G,T �� �������}�ּ� ����

�迭 �Է� �ް�
///
int S, P;
	vector<char> DNA_str;
	int str[4] = { 0, };
	int result = 0

	cin >> S >> P;
	for (int i = 0; i < S; i++) {
		cin >> DNA_str[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> str[i];
	}

	//result �ʱ�ȭ �Լ�
	for (int i = 0; i < 4; i++) {
		result[i] = str[i];
	}

	for (int i = 0; i < S; i++) {
		if (DNA_str[i] == 'A') {
			result[0]--;
		}
		else if (DNA_str[i] == 'C') {
			result[1]--;
		}
		else if (DNA_str[i] == 'G') {
			result[2]--;
		}
		else if (DNA_str[i] == 'T') {
			result[3]--;
		}

		else if
	}
///
*/