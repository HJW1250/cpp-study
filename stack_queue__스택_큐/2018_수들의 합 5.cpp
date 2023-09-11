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
        if (sum == N) {   // 답 찾으면
            count++;
            end++;
            sum = sum + end;
        }
        else if (sum > N) {   // 현재 합이 답보다 크면
            sum = sum - start;
            start++;
        }
        else {   // 현재 합이 답보다 작으면
            end++;
            sum = sum + end;
        }
    }
    cout << count << "\n";
}

/*
슈도코드

N(연속된 자연수의 합)
인덱스 start, end
현재 연속된 합 SUM

while(end ! = N){
if(sum==N) 경우의 수 증가, end 증가, sum값 변경
else if(sum>N) sum값 변경, start 증가
else if(sum<N) end값 증가, sum값 변경
}

결과 출력

*/