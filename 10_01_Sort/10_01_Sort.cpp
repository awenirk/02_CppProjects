#include <iostream>
using namespace std;


void InitArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 100;
	}
}
void ShowArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int linearSearch(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) return i;
	}
	return -1;
}

void selectSort(int arr[], int size) {
	int temp, index;
	for (int i = 0; i < size; i++) {
		index = i;
		temp = arr[i];
		for (int j = i+1; j < size; j++) {
			if (arr[j] < temp) {
				temp = arr[j];
				index = j;
			}
		}
		if (index != i) {
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}
void bobbleSort(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void shakerSort(int arr[], int size) {
	int j, index = size - 1;
	int left = 1, right = size - 1;
	int temp;
	do {
		for (j = right; j >= left; j--) {
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}index = j;
		}
		left = index + 1;
		for (j = left; j <= right ; j++)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		right = index - 1;

	} while (left < right);
}

int main()
{
	srand(time(0));
	const int size = 25;
	int arr[size]{};

    cout << "Hello World!\n";

	InitArr(arr, size);
	ShowArr(arr, size);
	// selectSort(arr, size);
	// bobbleSort(arr, size);
	shakerSort(arr, size);
	ShowArr(arr, size);


	/*int searchKey, indexFind = 50;
	cout << "Enter search key: "; cin >> searchKey;

	indexFind = linearSearch(arr, size, searchKey);

	if (indexFind != -1) {
		cout << "Element [" << searchKey << "] find in index [" << indexFind << "]" << endl;
	}
	else {
		cout << "Element " << searchKey << " not found." << endl;
	}*/


}
