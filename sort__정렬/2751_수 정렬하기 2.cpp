#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> M(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> M[i];
	}
	sort(M.begin(), M.end());

	for (int i = 0; i < N; i++) {
		cout << M[i] << "\n";
	}
}