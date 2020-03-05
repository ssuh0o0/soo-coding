#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int map[100][100];
int a = 0;
void check(int xs, int ys, int xe, int ye) {
	int num = map[xs][ys];
	for (int i = xs; i < xe; i++) {
		for (int j = ys; j < ye; j++) {
			if (num == 0 && map[i][j] == 1) num = 2;
			if (num == 1 && map[i][j] == 0) num = 2;
			if (num == 2) {
				printf("(");
				check(xs, ys, (xs + xe) / 2, (ys + ye) / 2);
				check(xs, (ys + ye) / 2, (xs + xe) / 2, ye);
				check((xs + xe) / 2, ys, xe, (ys + ye) / 2);
				check((xs + xe) / 2, (ys + ye) / 2,xe,ye);
				printf(")");
				return;
			}
			else {

			}
		}
	}
	
	if (num == 0) {
		cout << 0;
	}
	else if (num == 1) {
		cout << 1;
	}

	return;
}
int main() {
	int N;
	cin >> N;
	memset(map, 0, sizeof(map));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N;j++) {
			cin >> map[i][j];
		 }
	}
	if (N == 1) {
		printf("(%d)", map[0][0]);
	}
	else {
		check(0, 0, N, N);
	}
}