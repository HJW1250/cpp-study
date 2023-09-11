#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int T = 0;
	int cnt = 0;
	char arr[51];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> arr;
		int size = strlen(arr);
		for (int i = 0; i < size; i++) {
			if (arr[i] == '(') {
				cnt++;
			}
			else if (arr[i] == ')') {
				if (cnt == 0) {
					cnt++;
					break;
				}
				else { cnt--; }
			}
			else { break; }
		}

		if(cnt != 0) { cout << "NO" << endl; }
		else if(cnt == 0) { cout << "YES" << endl; }

		cnt = 0;
		for (int i = 0; i < size; i++) {	arr[i] = {}; }
	}
}

/*
�����ڵ�
int T = �Է� ������ ����
char str[51] = ���ڿ� 2�̻� 50����

cin >> T

for(T�� ������ŭ �ݺ�){
	cin >> str(��ȣ ���ڿ�)
	for(str�� ���̸�ŭ �ݺ�){
		if(�� ��ȣ �� ���){
			cnt ++
		}
		else if(�� ��ȣ �� ���){
			if(cnt==0�� ���){	//������ ���ȣ�ϰ��
				cnt ++
				break
			}
			else{
			cnt --
			}
		}
		��� ���

		��� �ʱ�ȭ
	}
}
*/