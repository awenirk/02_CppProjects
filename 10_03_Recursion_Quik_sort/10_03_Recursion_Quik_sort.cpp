#include <iostream>
#include <iomanip>
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

int Summa(int arr[], int size, int index) {
	if (index == size - 1) 
		return arr[index];
	return arr[index] + Summa(arr, size, index + 1);
}

void QuickSort(int arr[], int size, int B, int E) {
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E) / 2];
	do
	{
		while (arr[i] < p) i++;
		while (arr[j] > p) j--;
		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if (B < j) QuickSort(arr, size, B, j);
	if (i < E) QuickSort(arr, size, i, E);
}

int BinarySearch(int arr[], int size, int key) {
	int B = 0, E = size - 1;
	while (true)
	{
		int p = (B + E) / 2;
		if (key > arr[p]) {
			B = p + 1;
		}
		else if (key < arr[p]) {
			E = p + 1;
		}
		else if (key == arr[p]) return p;
		if (B > E) return -1;

	}
}




int main()
{
	const int size = 10;
	int arr[size] = { 1,8,7,4,5,6,3,10,14,9 };
	/*
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	summa = Summa(arr, size, 0);
	cout << endl << summa;
	*/
	InitArr(arr, size);

	ShowArr(arr, size);
	QuickSort(arr, size, 0, size - 1);
	ShowArr(arr, size);


	int searchKey, indexFind;
	cout << "Enter search key --> ";
	cin >> searchKey;
	indexFind = BinarySearch(arr, size, searchKey);
	if (indexFind != -1)
	{
		cout << "Element [" << searchKey << "] find in index ["
			<< indexFind << "]" << endl;
	}
	else
	{
		cout << "Element " << searchKey << " not found " << endl;
	}


}
