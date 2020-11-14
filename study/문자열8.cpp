#include <iostream>
#include <string>
using namespace std;

int main() {
	string dial;
	cin >> dial;
	int size = dial.length();
	for (int i = 0; i < size; i++) {
		dial[i] = toupper(dial[i]);
	}
	int Idial[15] = { 0, };
	for (int i = 0; i < size; i++) {
		char word = dial[i];

		switch (word) {
		case 'A': case 'B': case 'C':
			Idial[i] = 3;
			break;
		case 'D': case 'E': case 'F':
			Idial[i] = 4;
			break;
		case 'G': case 'H': case 'I':
			Idial[i] = 5;
			break;
		case 'J': case 'K': case 'L':
			Idial[i] = 6;
			break;
		case 'M': case 'N': case 'O':
			Idial[i] = 7;
			break;
		case 'P': case 'Q': case 'R': case 'S':
			Idial[i] = 8;
			break;
		case 'T': case 'U': case 'V':
			Idial[i] = 9;
			break;
		case 'W': case 'X': case 'Y': case 'Z':
			Idial[i] = 10;
			break;
		}
	}
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += Idial[i];
	}
	cout << sum;
	return 0;
}
