#include <iostream>
using namespace std;
 
int main() {
	int size = 0;
	cin >> size;
	int *arr = new int[size];
	
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i;j++) {
			sum += arr[j];
		}
	}
	cout << sum;
}
