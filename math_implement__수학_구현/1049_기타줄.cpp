#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	int sum1 = 0, sum2 =0, sum3 = 0;

	cin >> N >> M;
	int N1 = N;
	int N2 = N;
	int N3 = N;
	vector<int> pack(M, 0);
	vector<int> each(M, 0);
	vector<int> result(3, 0);

	for (int i = 0; i < M; i++) {
		cin >> pack[i] >> each[i];
	}

	sort(pack.begin(), pack.end());
	sort(each.begin(), each.end());

	while (true) {
		if (N1 == 0) {	break;	}
		else if (N1 >= 6) {
			sum1 = sum1 + pack[0];
			N1 = N1 - 6;
		}
		else if (N1 < 6) {
			sum1 = sum1 + each[0];
			N1 = N1 - 1;
		}
	}

	while (true) {
		if (N2 < 0) {	break;	}
		sum2 = sum2 + pack[0];
		N2 = N2 - 6;
	}

	while (true) {
		if (N3 == 0) { break; }
		sum3 = sum3 + each[0];
		N3 = N3 - 1;
	}

	result[0] = sum1;	result[1] = sum2;	result[2] = sum3;
	sort(result.begin(), result.end());
	cout << result[0];
}

/*
�����ڵ�

N // ������ ��Ÿ�� ��
M // ��Ÿ�� �귣�� ��
sum =0 // ���ҵ� ����

cin>>N>>M;	// ���� �Է¹���

int pack[M]={0,};	// ��Ű�� ���� �������� ã������ ��������
int each[M]={0,};	// ���� ���� �������� �O������ ��������

for(i�� M��ŭ �ݺ�){
	cin>>pack[i]>>each[i];
}

//������ ã��
sort(pack.begin(), pack.end());
sort(each.begin(), each.end());

while(true){
	if(N=0 �϶�){
		break;
	}
	else if(N>6 �ϋ�){
		sum=sum+pack[0]
	}
	else if(N<6 �϶�){
		sum=sum+each[0]
	}
}

cout<<num;


*/