#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(0);
	cin.sync_with_stdio(false);
	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i<N; i++)
	{
		cin >> v[i];
	}

	int M;
	cin >> M;
	vector <int> w(M);
	for (int i = 0; i<M; i++)
	{
		cin >> w[i];
	}

	sort(v.begin(), v.end());
	int flag = 0;
	for (int i = 0; i < M; i++)
	{
		flag = 0;
		if (flag == 0) {
			for (int j = 0; j < N; j++)
			{
				if (v[j] == w[i])
				{
					cout << 1;
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)cout << 0;
	}
}