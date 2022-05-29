#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool isTrue(string a,string b){
	if (a.length() < b.length()) {
		return true;
	}
	if (a.length() == b.length()) {
		for (int i=0; i <= a.length(); i++) {
			if (a[i] == b[i]) continue;
			else if (a[i] < b[i]) return true;
			else return false;
		}
	}
}
int main() {
	int size;
	cin >> size;
	vector<string> a(size);
	for (int i = 0; i < size; ++i)
	{

		cin >> a[i];

		for (int j = 0; j < i; j++) {
			if (a[j] == a[i]) {
				--i;
			}
		}
	}
	sort(a.begin(), a.end(), isTrue);
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
