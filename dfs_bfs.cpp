#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int visited_dfs[100];
int visited_bfs[100];
vector<int> a[100];
void dfs(int s) {
	if (visited_dfs[s]) return;

	visited_dfs[s] = true;
	cout << s<<"\t";
	for (int i = 0; i < a[s].size(); i++) {
		int n = a[s][i];
		dfs(n);
	}
}

void bfs(int s) {
	queue <int> q;
	q.push(s);
	visited_bfs[s] = true;

	while (!q.empty()) {
		int f = q.front();
		q.pop();
		cout << f<<"\t";
		for (int i = 0; i < a[f].size(); i++) {
			int b = a[f][i];
			if (!visited_bfs[b]) {
				q.push(b);
				visited_bfs[b] = true;
			}
			
		}
	}
}

int main() {
	int N = 0; // number
	int M = 0; // line
	int V = 0; // start vertex

	cin >> N >> M >> V;

	int one = 0;
	int two = 0;
	
	for (int i = 0; i < M; i++) {
		cin >> one >> two; // connect one to two
		a[one].push_back(two);
	}
	dfs(V);
	cout << endl;
	bfs(V);
}