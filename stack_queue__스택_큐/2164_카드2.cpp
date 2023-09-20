#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> myQ;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		myQ.push(i);
	}
	while (myQ.size() > 1) {
		myQ.pop();
		myQ.push(myQ.front());
		myQ.pop();
	}
	cout << myQ.front()+1;
}

/*
슈도코드
(1장 남을때까지)
가장 위 카드 버림 -> 가장 위 카드 아래로

6	5	4	3	2	1
가장 위 카드 버리기			// pop()
6	5	4	3	2
가장 위 카드 아래로 내리기	// pop() -> push()
2	6	5	4	3
가장 위 카드 버리기			// pop()
2	6	5	4
가장 위 카드 아래로 내리기	// pop() -> push()
4	2	6	5
가장 위 카드 버리기			// pop()
4	2	6
가장 위 카드 아래로 내리기	// pop() -> push()
6	4	2
가장 위 카드 버리기			// pop()
6	4
가장 위 카드 아래로 내리기	// pop() -> push()
4	6
가장 위 카드 버리기			// pop()
4

N // 카드개수
myQ // 카드 저장 큐

for(카드 개수만큼 반복){
	큐에 카드 저장
}
while(카드가 1장 남을 때까지){
	맨 위의 카드를 버림
	맨 위의 카드를 제일 아래 카드 밑으로 이동
}
마지막으로 남은 카드 출력
*/