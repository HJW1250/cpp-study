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
        // ���ο� ���� ��� �� ������ �������� �ʰ� ���� ������ ū ���� ������ ���������ν� �ð����⵵�� ���� �� ����
        while (mydeque.size() && mydeque.back().first > now) {
            mydeque.pop_back();
        }
        mydeque.push_back(Node(now, i));
        // �������� ��� ���� ������ ����
        if (mydeque.front().second <= i - L) {
            mydeque.pop_front();
        }
        printf("%d ", mydeque.front().first);
    }
}

/*
�����ڵ�
N // ������ ����
L // �ּڰ��� ���ϴ� ����
Node Ÿ�� ����(int, int)
deque<Node> mydeque // �����͸� ���� �� �ڷᱸ��

for(N��ŭ �ݺ�){
    now(���� ������)
    ���� ������ ��ġ���� now���� ū �� ������ ����
    ���� ������ ��ġ�� now�� ����
    ���� ù ��° ��ġ�������� L�� ������ ��� ��(now index - L <= index)�� ������ ����
    ���� ù ��° ������ ���
}
*/