#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	int num = 0;
	vector< vector<int> > color(N, vector<int>(N, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num;
			color[i][j] = num;
		}
	}
	for (vector<int>vec : color) {
		for (int n : vec) {
			cout << " " << n;
		}
		cout << "\n";
	}
}