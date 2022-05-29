#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	
	int size = 0;
	cin >> size;

	vector<pair<int, int>> v(size);

	for (int i = 0; i < size; i++) {
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < size; i++) {
		cout << v[i].first <<" "<< v[i].second<<endl;
	}

}