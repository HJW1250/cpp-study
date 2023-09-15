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

	for (int i = 0; i < P; i++) {	// 초기 P부분 문자열 처리
		Add(A[i]);
	}
	if (checkSecret == 4) {
		result++;
	}
	// 슬라이딩 윈도우 처리 부분
	for (int i = P; i < S; i++) {
		int j = i - P;
		Add(A[i]);
		Remove(A[j]);
		// 4자리 수에 대한 크기가 모두 충족되었을 때는 유효한 비밀번호
		if (checkSecret == 4) {
			result++;
		}
	}
	cout << result << "\n";
	
}

/*
슈도코드
checkArr	// 비밀번호 체크 배열
myArr		// 현재 상태 배열
checkSecret // 몇 개의 문자에 대한 개수를 충족했는지 판단하는 변수
S // 문자열 크기
P // 부분 문자열 크기
A // 문자열 데이터
P // 범위 0 ~ (P-1)만큼 배열 S에 적용하고 유효한 비밀번호인지 판단하기

for(i를 P에서 S까지 반복){
	// 한칸씩 이동하면서 제거되는 문자열과 새로 들어오는 문자열에 대해 처리
	j선언(i-P)
	Add(A[i])
	Remove(A[j])
	현재 부분 문자열이 유효한 비밀번호인지(checkSecret==4)판단하여 결괏값 업데이트
}
결괏값 출력

//별도 함수
Add(문자 더하기 함수){
	새로 들어온 문자에 대해 myArr 업데이트 및 checjSecret값 변경
}
Remove(문자 빼기 함수){
	제거되는 문자에 대해 myArr 업데이트 및 checkSecret값 변경
}

// 함수를 만들어 사용하면 좀더 편하게 구현 가능
S = 문자열(A,C,G,T 만) 길이
P = 비밀번호로 사용할 부분문자열 길이
DNA_str = 임의로 만든 문자열
str[4] = {A,C,G,T 만 순서대로}최소 개수

배열 입력 받고
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

	//result 초기화 함수
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