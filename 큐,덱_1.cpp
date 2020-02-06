#include <iostream>
#include <queue>
#include <string>
#include<cstring>

using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(false);
	int N;
	cin >> N;
	queue<int> q;
	int num = 0;
	char *ord=new char[20];
	for (int i = 0; i < N; i++) {
		cin >> ord;
		if (!strcmp(ord,"push")) {
			cin >> num;
			q.push(num);
		}
		else if (!strcmp(ord, "pop")){
			if (q.empty()) cout << "-1";
			else {
				cout << q.front() << "\n";
				q.pop();	
				if (q.empty()) cout << "-1";
			}
		}
		else if (!strcmp(ord, "size")) {
			int size = q.size();
			cout << size << "\n";
		}
		else if (!strcmp(ord, "empty")) {
			if (q.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (!strcmp(ord, "front")) {
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else cout << "-1" << "\n";
		}
		else if (!strcmp(ord, "back")) {
			if (!q.empty()) {
				cout << q.back() << "\n";
			}
			else cout << "-1" << "\n";
		}
	}
}