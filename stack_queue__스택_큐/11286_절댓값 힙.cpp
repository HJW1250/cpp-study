#include <iostream>
#include <queue>
using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if (first_abs == second_abs)
            return o1 > o2;// ���밪�� ���� ��� ���� �켱 ����
        else
            return first_abs > second_abs;// ���밪�� �������� ����
    }
};

int main()
{

    // �켱���� ť ������: <�ڷ���, ����ü, ���Լ���>
    priority_queue<int, vector<int>, compare> myQ;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int request;
        cin >> request;
        if (request == 0) {
            if (myQ.empty()) {
                cout << "0\n";
            }
            else {
                cout << myQ.top() << '\n';
                myQ.pop();
            }
        }
        else {
            myQ.push(request);
        }
    }
}

/*
�����ڵ�
����	ť
18								//�Է°���
1		[1]
-1		[-1][1]
0		[1]						//ť�� top ����ϰ� pop
0								//ť�� top ����ϰ� pop
0								//ť�� ����־� 0 ���
1		[1]
1		[1][1]
-1		[1][1][-1]				//���� ���� ����
-1		[1][1][-1][-1]			//���� ���� ����
2		[2][1][1][-1][-1]
-2		[2][-2][1][1][-1][-1]	//���� ���� ����
0		[2][-2][1][1][-1]		//ť�� top ����ϰ� pop
0		[2][-2][1][1]			//ť�� top ����ϰ� pop
0		[2][-2][1]				//ť�� top ����ϰ� pop
0		[2][-2]					//ť�� top ����ϰ� pop
0		[2]						//ť�� top ����ϰ� pop
0								//ť�� top ����ϰ� pop
0								//ť�� ����־� 0 ���

N // ���� ��û ����
myQ // ������ ���� �켱���� ť
���� �������� ���ĵǵ��� ����
��, ������ ���ٸ� ���� �켱 ����

for(N��ŭ �ݺ�){
	��û�� 0�� �� : ť�� ������� 0 ���, �ƴϸ� ť�� top ����ϰ� pop
	��û�� 1�� �� : ���ο� �����͸� �켱���� ť�� push
}

*/