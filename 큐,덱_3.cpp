#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N = 0;
	int K = 0;
	queue<int>q;
	cin >> N >> K;
	int *arr = new int[N];

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	int num = 0;
	for (int i = 1; i <= q.size(); i++) {
		int front = q.front();
		if(i==K){
			arr[num++] = front;
			i = 0;
		}
		else {
			q.push(front);
		}
		q.pop();
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}
