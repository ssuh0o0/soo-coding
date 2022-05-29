#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(false);
	int N = 0;
	cin >> N;

	string ord;
	int num = 0;
	deque<int>dq;
	for (int i = 0; i < N; i++) {
		cin >> ord;
		if (ord == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		else if (ord == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (ord == "pop_front") {
			if (dq.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (ord == "pop_back") {
			if (dq.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (ord == "front") {
			if (dq.size() == 0) {
				cout << -1 << "\n";
			}
			else cout << dq.front() << "\n";
		}
		else if (ord == "back") {
			if (dq.size() == 0) {
				cout << -1 << "\n";
			}
			else cout << dq.back() << "\n";
		}
		else if (ord == "size") {
			cout << dq.size() << "\n";
		}
		else if (ord == "empty") {
			if (dq.size() == 0) {
				cout << 1 << "\n";
			}
			else cout << 0 << "\n";
		}
	}
}