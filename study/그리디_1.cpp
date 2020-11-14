#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int money = 0;
	cin >> num >> money;
	int *coin = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> coin[i];
	}
	int m = money;
	int cnt = 0;
	for (int i = 9; money != 0; i--) {
		m = (money / coin[i]);
		if (m == 0) {
			m = money;
		}
		else {
			money %= coin[i];
			cnt += m;
		}
	}
	cout << cnt;
}
