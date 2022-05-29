#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int Wcnt = 0;
int Bcnt = 0;
int map[130][130];

void check(int xs, int ys, int xe, int ye)
{
	int num = map[xs][ys];

	for (int i = xs; i < xe; ++i) {
		for (int j = ys; j < ye; ++j) {
			if (num == 0 && map[i][j] == 1) {
				num = 2;
			}
			else if (num == 1 && map[i][j] == 0) {
				num = 2;
			}
			if (num == 2) {
				check(xs, ys, (xs + xe) / 2, (ys + ye) / 2);
				check((xs + xe) / 2, (ys + ye) / 2, xe, ye);
				check(xs, (ys + ye) / 2, (xs + xe) / 2, ye);
				check((xs + xe) / 2, ys, xe, (ys + ye) / 2);
				return;
			}
		}
	}

	if (num == 0) {
		++Wcnt;
	}
	else if (num == 1) {
		++Bcnt;
	}

	return;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;

	memset(map, 0, sizeof(map));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> map[i][j];
		}
	}

	check(0, 0, n, n);

	cout << Wcnt << endl;
	cout << Bcnt << endl;

	return 0;
}
