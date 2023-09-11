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
슈도코드
int T = 입력 데이터 갯수
char str[51] = 문자열 2이상 50이하

cin >> T

for(T의 개수만큼 반복){
	cin >> str(괄호 문자열)
	for(str의 길이만큼 반복){
		if(좌 괄호 일 경우){
			cnt ++
		}
		else if(우 괄호 일 경우){
			if(cnt==0일 경우){	//시작이 우괄호일경우
				cnt ++
				break
			}
			else{
			cnt --
			}
		}
		결과 출력

		결과 초기화
	}
}
*/