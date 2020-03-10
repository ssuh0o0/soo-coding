#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N=0;
	int num=0;
	cin >> N >> num;
	vector <int> v;
	for (int i = 0; i < N; i++) {
		int a = 0;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	int cnt = 1;
	int left = 1;
	int right = v[N - 1] - v[0];
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		cnt = 1;
		int start = v[0];
		for (int i = 1; i < N; i++) {
			if (v[i] - start >= mid) {
				cnt++;
				start = v[i];
			}
		}
		if (cnt < num) {
			right = mid -1;
		}
		else if (cnt >= num) {
			left = mid+1;
		}
	}
	cout << mid;
}