#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt = -1;
vector <int> v[101];
int visited[101];
void dfs(int s) {
	if (visited[s]) return;
	visited[s] = true;
	cnt++;
	for (int i = 0; i < v[s].size(); i++) { 
		int a = v[s][i];
		dfs(a);
	}
}

int main() {
	int N = 0; //Á¤Á¡ÀÇ °³¼ö
	int M = 0; //°£¼±ÀÇ °³¼ö
	cin >> N;
	cin >> M;

	if (N == 1) {
		cout << 1;
		return 0;
	}
	int one = 0;
	int two = 0;
	for (int i = 0; i < M; i++) {
		cin >> one >> two;
		v[one].push_back(two);
		v[two].push_back(one);
	}
	dfs(1);
	cout << cnt;
}
