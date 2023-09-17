#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
typedef pair<int, int> Node;
int main()
{
    int N, L;
    cin >> N >> L;
    deque<Node> mydeque;

    for (int i = 0; i < N; i++) {
        int now;
        scanf("%d", &now);
        // 새로운 값이 들어 올 때마다 정렬하지 않고 현재 수보다 큰 값을 덱에서 제거함으로써 시간복잡도를 줄일 수 있음
        while (mydeque.size() && mydeque.back().first > now) {
            mydeque.pop_back();
        }
        mydeque.push_back(Node(now, i));
        // 범위에서 벗어난 값은 덱에서 제거
        if (mydeque.front().second <= i - L) {
            mydeque.pop_front();
        }
        printf("%d ", mydeque.front().first);
    }
}

/*
슈도코드
N // 데이터 개수
L // 최솟값을 구하는 범위
Node 타입 선언(int, int)
deque<Node> mydeque // 데이터를 담을 덱 자료구조

for(N만큼 반복){
    now(현재 데이터)
    덱의 마지막 위치에서 now보다 큰 값 덱에서 제거
    덱의 마지막 위치에 now값 저장
    덱의 첫 번째 위치에서부터 L의 범위를 벗어난 값(now index - L <= index)을 덱에서 제거
    덱의 첫 번째 데이터 출력
}
*/