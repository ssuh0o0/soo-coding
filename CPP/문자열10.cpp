#include <iostream>
#include <string>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	string str[100];
	int cnt[100] = { 0, };

	for (int i = 0; i < num; i++) {
		cin >> str[i];
	}

	char check = (str[0])[0];

	for (int i = 0; i <num; i++) {
		bool isTrue = true;
		for (int j = 0; j < str[i].length(); j++) {
			check = (str[i])[j];
			if (isTrue) {
				if (((str[i])[j + 1]) != check && (str[i].length()) != 1) {
					for (int k = j + 2; k < str[i].length(); k++) {
						if (((str[i])[k]) == check) {
							isTrue = false;
							cnt[i] = 0;
						}
					}
				}
			}
			if (isTrue) {
				cnt[i] = 1;
			}

		}
	}
	int sum = 0;
	for(int i=0;i<num;i++){
		sum += cnt[i];
	}
	cout << sum;
	return 0;
}
