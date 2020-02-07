#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(false);
	int N=0;
	cin >> N;
	queue<int>q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	for (int i = 0; i<N-1; i++) {
		q.pop();
		int f = q.front();
		if (q.size() > 1) {
			q.pop();
			q.push(f);
		}
		else cout << q.front();
	}
}
