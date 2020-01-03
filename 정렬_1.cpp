#include <iostream>
using namespace std;

void insertion(int arr[],int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j >= 0; j--) {
			if (arr[j - 1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
			else continue;
		}
	}
}
int main() {
	int size = 0;
	cin >> size;
	int *arr= new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	insertion(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}

}