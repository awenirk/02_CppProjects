#include <iostream>
#include <iomanip>
using namespace std;

void InitArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = 10 + rand() % 90;
        }
    }
}
void ShowArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    cout << "=====================" << endl;
}

void FillOneRow(int* arr, int cols) {
    for (int i = 0; i < cols; i++) {
        arr[i] = rand() % 10;
    }
}

int** AddRowToEnd(int** arr, int &rows, int cols) {
    int** temp = new int*[rows + 1];
    for (int i = 0; i < rows; i++) {
        temp[i] = arr[i];
    }

    temp[rows] = new int[cols];
    FillOneRow(temp[rows], cols);

    delete[] arr;
    rows++;

    return temp;
}

int** AddRowsByPos(int** arr, int& rows, int cols, int pos) {
    int** temp = new int* [rows + 1];
    for (int i = 0; i < pos; i++) {
        temp[i] = arr[i];
    }
    temp[pos] = new int[cols];
    FillOneRow(temp[pos], cols);

    for (int i = pos + 1; i <= rows; i++) {
        temp[i] = arr[i - 1];
    }

    delete[] arr;
    rows++;

    return temp;
}

int** AddColToTheEnd(int** arr, int rows, int& cols) {
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++) {
        temp[i] = new int[cols + 1];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[]arr;

    for (int i = 0; i < rows; i++) {
        arr[i][cols] = 5;
    }
    cols++;
    return temp;

}

void DeleteRow(int** arr, int& rows, int cols) {
    int** temp = new int* [rows - 1];
    for (int i = 0; i < length; i++)
    {

    }
}








int main()
{
    int rows = 3;
    int cols = 4;

    // cout << "Enter cout rows: "; cin >> rows;
    // cout << "Enter cout cols: "; cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);
    arr = AddRowToEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);
    arr = AddRowsByPos(arr, rows, cols, 2);
    ShowArray(arr, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[]arr;



}