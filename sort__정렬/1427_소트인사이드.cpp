#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    int max, temp;
    cin >> str;
    vector<int> A(str.size(), 0);

    for (int i = 0; i < str.size(); i++) {
        A[i] = stoi(str.substr(i, 1));
    }

    for (int i = 0; i < str.length(); i++) {
        max = i;
        for (int j = i + 1; j < str.length(); j++) {
            if (A[j] > A[max])  //���������̹Ƿ� �ִ� ���� ã��
                max = j;
        }
        if (A[i] < A[max]) {
            temp = A[i];
            A[i] = A[max];
            A[max] = temp;
        }
    }
    for (int i = 0; i < A.size(); i++) {
        cout << A[i];
    }
}

/*
�����ڵ�
str // �����ϴ� ��
A // �ڸ������� �����Ͽ� �����ϴ� �迭

for(i�� 0~str ���̸�ŭ �ݺ�){
    A[i] = str.substr() // �迭 A�� ����
}

for(i�� 0~str ���̸�ŭ �ݺ�){
    for(j�� i+1~str ���̸�ŭ �ݺ�){
        ����������� max�� ã��
    }
    ���� i�� ���� max�� �� max���� ũ�� swap����
}

�迭 A���
*/