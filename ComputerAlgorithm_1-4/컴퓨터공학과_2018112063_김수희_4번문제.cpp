#include <iostream>
#include <random>
#include <time.h>
#include <vector>
#include <cstdlib>
#include <random>
using namespace std;

vector<int> Shuffle(vector<int>set, int num) {
	for (int i = 0; i <num; i++)
	{
	a:;
		int temp = rand() % 20 + 1;
		if (set.size() == 0)
		{
			set.push_back(temp);
		}
		else
		{
			for (int j = 0; j <= set.size() - 1; j++)
			{
				if (temp == set[j])
				{
					goto a;
				}
			}
			set.push_back(temp);
		}
	}
	for (int i = 0; i < num; i++)
	{
		int temp = set[i];
		for (int j = i - 1; j = 0; j--) {
			if (set[j] == temp) {
				i--;
			}
		}
	}
	sort(set.begin(), set.end());
	for (int i = 0; i < num; ++i) {
		cout << set[i] << " ";
	}
	cout << "\n";
	return set;
}

void Union(vector<int> a, vector<int> b) {
	vector<int> total(b);
	for (int i = 0; i < a.size();) {
		int cnt = 0;
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				i++;
				break;
			}
			else {
				cnt++;
			}
		}
		if (cnt >= b.size()) {
			total.push_back(a[i]);
			i++;
		}
	}

	sort(total.begin(), total.end());
	cout << "합집합 - ";
	for (int i = 0; i < total.size(); i++) {
		cout << total[i] << ' ';
	}
	//cout <<"----"<< total.size();
}

void Intersection(vector<int>a, vector<int>b) {
	vector<int> Inter;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				Inter.push_back(a[i]);
				break;
			}
			else continue;
		}
	}
	sort(Inter.begin(), Inter.end());
	cout << "교집합 - ";
	for (int i = 0; i < Inter.size(); i++) {
		cout << Inter[i] << ' ';
	}
	//cout <<"---" <<Inter.size();
}


int main()
{
	srand(time(NULL));
	int N, M;
	cin >> N>>M;
	if (N < 10 || M < 10) {
		cout << "error N과 M은 10보다 크거나 같아야 합니다."<<"\n";
		cin >> N >> M;
	}
	vector<int> A, B, A1, B1;
	cout << "집합A - ";
	A1 = Shuffle(A, N);
	cout << "집합B - ";
	B1 = Shuffle(B, M);

	Union(A1, B1);
	cout << "\n";
	Intersection(A1, B1);


}