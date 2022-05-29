#include <iostream>
using namespace std;
int main() {
	int num = 0;
	cin >> num;

	int guess[15][15] = { 0, };
	for (int i = 1; i <15; i++) {
		guess[i][1] = 1;
		guess[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			guess[i][j] = guess[i - 1][j] + guess[i][j - 1];
		}
	}
	int *floor = new int[num];
	int *room = new int[num];
	int *ans= new int[num];
	for (int i = 0; i < num; i++) {
		cin >> floor[i];
		cin >> room[i];
	}
	for (int i = 0; i < num; i++) {
		cout << guess[floor[i]][room[i]] << endl;
	}
}