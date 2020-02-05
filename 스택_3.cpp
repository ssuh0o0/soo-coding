#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isVPS(string vps) {
	stack<char>s;
	char c;
	for (int i = 0; i < vps.length(); i++) {
		c = vps[i];
		if (c == '(') {
			s.push(vps[i]);
		}
		else if (c == ')') {
			if (!s.empty()) {
				s.pop();
			}
			else return false;
		}
	}
	return s.empty();
}
int main() {
	int T = 0;
	cin >> T;

	string *VPS = new string[100];
	for (int i = 0; i < T; i++) {
		cin >> VPS[i];
	}
	for (int i = 0; i < T; i++) {		
		if (isVPS(VPS[i])) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}