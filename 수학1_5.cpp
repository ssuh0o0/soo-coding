#include <iostream>
using namespace std;

int main() {
	unsigned int up = 0;
	unsigned int down = 0;
	unsigned int num = 0;
	cin >> num;
	unsigned int cnt=0;
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < i; j++) {
			if (i % 2 != 0) {
				up = i - j;
				down = j + 1;
			}
			else {
				up = j + 1;
				down = i - j;
			}
			cnt++;
			if (cnt == num) {
				cout << up << "/" << down;
			}
		}
	}	
}