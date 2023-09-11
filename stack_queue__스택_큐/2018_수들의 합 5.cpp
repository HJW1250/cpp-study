#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1, start = 1, end = 1, sum = 1;

    while (end != N) {
        if (sum == N) {   // �� ã����
            count++;
            end++;
            sum = sum + end;
        }
        else if (sum > N) {   // ���� ���� �亸�� ũ��
            sum = sum - start;
            start++;
        }
        else {   // ���� ���� �亸�� ������
            end++;
            sum = sum + end;
        }
    }
    cout << count << "\n";
}

/*
�����ڵ�

N(���ӵ� �ڿ����� ��)
�ε��� start, end
���� ���ӵ� �� SUM

while(end ! = N){
if(sum==N) ����� �� ����, end ����, sum�� ����
else if(sum>N) sum�� ����, start ����
else if(sum<N) end�� ����, sum�� ����
}

��� ���

*/