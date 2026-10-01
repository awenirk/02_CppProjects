#include <iostream>
#include <iomanip>
using namespace std;

int RNum() {
    return 10 + rand() % 90;
}

void InitArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = RNum();
        }
    }
}
// адаптивний show
void ShowArray(int** arr, int rows, int cols) {
    for (int i = 0; i < cols; i++)
        cout << "====";
    cout << "=#" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << " |" << endl;
    }
    for (int i = 0; i < cols; i++)
        cout << "====";
    cout << "=#" << endl << endl;
}
void FillOneRow(int* arr, int cols) {
    for (int i = 0; i < cols; i++) {
        arr[i] = RNum();
    }
}


// Завдання 1. Написати функцію, що додає рядок двови-
// мірному масиву на початок.
int** AddRowToBegin(int** arr, int &rows, int cols) {
    int** temp = new int*[rows + 1];
    temp[0] = new int[cols];
    FillOneRow(temp[0], cols);
    for (int i = 1; i <= rows; i++) {
        temp[i] = arr[i - 1];
    }
    delete[] arr;
    rows++;

    return temp;
}

// Завдання 2. Написати функцію, що видаляє рядок двови -
// мірному масиву з початку.
int** DeleteFirstRow(int** arr, int& rows, int cols) {
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows - 1; i++) {
        temp[i] = arr[i + 1];
    }
    delete[] arr;
    rows--;

    return temp;
}

// Завдання 3. Написати функцію, що видаляє рядок двови -
// мірному масиву з зазначеної позиції.
int** DeleteRowByIndex(int** arr, int& rows, int cols, int pos) {
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows - 1; i++) {
        if (i < pos)
            temp[i] = arr[i];
        else if (i >= pos)
            temp[i] = arr[i + 1];
    }
    delete[] arr;
    rows--;

    return temp;
}

// Завдання 4. Написати функцію, що додає колонку дво -
// вимірного масиву на початок.
int** AddColToBegin(int** arr, int rows, int& cols) {
    int** temp = new int* [rows];

    for (int i = 0; i < rows; i++) {
        temp[i] = new int[cols + 1];
        temp[i][0] = RNum();
        for (int j = 0; j < cols; j++)
            temp[i][j + 1] = arr[i][j];
    }
    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;
    cols++;

    return temp;
}


// На додаткові бали :

// Завдання 5. Написати функцію, що додає колонку дво -
// вимірного масиву за вказаним номером.
int** AddColByIndex(int** arr, int rows, int& cols, int pos) {
    int** temp = new int* [rows];

    for (int i = 0; i < rows; i++) {
        temp[i] = new int[cols + 1];

        for (int j = 0; j < cols+1; j++)
            if (j < pos)
                temp[i][j] = arr[i][j];
            else if (j == pos)
                temp[i][pos] = RNum();
            else if (j > pos)
                temp[i][j] = arr[i][j - 1];
    }

    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;
    cols++;

    return temp;
}

// Завдання 6. Написати функцію, що додає видаляє дво -
// вимірного масиву за вказаним номером.
int** DeleteColByIndex(int** arr, int rows, int& cols, int pos) {
    int** temp = new int* [rows];

    for (int i = 0; i < rows; i++) {
        temp[i] = new int[cols - 1];

        for (int j = 0; j < cols - 1; j++)
            if (j < pos)
                temp[i][j] = arr[i][j];
            else if (j >= pos)
                temp[i][j] = arr[i][j + 1];
    }

    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;
    cols--;

    return temp;
}


int main()
{
    int rows = 3, cols = 4, pos;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    cout << "0. Initial array: " << endl;
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);

    cout << "1. Add row to beggin: " << endl;
    arr = AddRowToBegin(arr, rows, cols);
    ShowArray(arr, rows, cols);

    cout << "2. Delete row ftom beggin: " << endl;
    arr = DeleteFirstRow(arr, rows, cols);
    ShowArray(arr, rows, cols);

    cout << "3. Delete row by index: " << endl;
    cout << "Enter Index: "; cin >> pos;
    arr = DeleteRowByIndex(arr, rows, cols, pos);
    ShowArray(arr, rows, cols);

    cout << "4. Add column to beggin: " << endl;
    arr = AddColToBegin(arr, rows, cols);
    ShowArray(arr, rows, cols);

    cout << "5. Add Column by index: " << endl;
    cout << "Enter Index: "; cin >> pos;
    arr = AddColByIndex(arr, rows, cols, pos);
    ShowArray(arr, rows, cols);

    cout << "6. Delete Column by index: " << endl;
    cout << "Enter Index: "; cin >> pos;
    arr = DeleteColByIndex(arr, rows, cols, pos);
    ShowArray(arr, rows, cols);


    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[]arr;
}

