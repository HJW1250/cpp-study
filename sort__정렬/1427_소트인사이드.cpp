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
            if (A[j] > A[max])  //내림차순이므로 최대 값을 찾음
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
슈도코드
str // 정렬하는 수
A // 자릿수별로 구분하여 저장하는 배열

for(i는 0~str 길이만큼 반복){
    A[i] = str.substr() // 배열 A에 저장
}

for(i는 0~str 길이만큼 반복){
    for(j는 i+1~str 길이만큼 반복){
        현재범위에서 max값 찾기
    }
    현재 i의 값과 max값 중 max값이 크면 swap실행
}

배열 A출력
*/