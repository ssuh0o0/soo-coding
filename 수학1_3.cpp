#include <iostream>
#include <map>
#define max 1000000000
using namespace std;

int main() {
	int inc = 2;
	int cnt = 0;
	int num = 1;
	map <int, int> m;
	m.insert(make_pair(1, 1));
	for (long long i = 2;i<max ; i++) {
		if (cnt == 6 * num) {
			cnt = 0;
			inc += 1;
			num++;
		}
		m.insert(make_pair(i, inc));
		cnt++;
	}
	int room = 0;
	cin >> room;

	map <int, int> ::iterator it;

	for (it = m.begin(); it != m.end(); it++) {
		if (room == it->first) {
			cout << it->second;
		}
	}
}