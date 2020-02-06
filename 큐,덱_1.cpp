#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	queue<int> q;
	int num = 0;
	char *ord=new char[20];
	for (int i = 0; i < N; i++) {
		cin >> ord;
		if (strcmp(ord, "push")) {
			cin >> num;
			q.push(num);
		}
		else if (strcmp(ord, "pop")){
			if (q.empty()) cout << "-1";
			q.pop();
		}
		else if (strcmp(ord, "size")) {

		}
		else if (strcmp(ord, "empty")) {
		}
		else if (strcmp(ord, "front")) {

		}
		else if (strcmp(ord, "back")) {

		}
	}
}