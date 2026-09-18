#include <iostream>
using namespace std;


void InitArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 1 + rand() % 100;
    }
}
void InitArr1(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = -20 + rand() % 40;
    }
}
void ShowArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//  1. Дан масив чисел розмірністю 10 елементів. Написа-
//  ти функцію, яка сортує масив за зростанням або за
//  спаданням, залежно від третього параметра функції.
//  Якщо він дорівнює 1, сортування йде за спаданням,
//  якщо 0, то за зростанням.Перші 2 параметри функ -
//  ції — це масив і його розмір, третій параметр за за -
//  мовчуванням дорівнює 1.
void bubbleSort1(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j]) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void bubbleSort2(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j - 1] < arr[j]) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sortArray(int arr[], int size, int set = 1) {
    if (set == 1) bubbleSort1(arr, size);
    else if (set == 0) bubbleSort2(arr, size);
}

//  2. Дан масив випадкових чисел у діапазоні від - 20 до
//  + 20. Необхідно знайти позиції крайніх від'ємних еле-
//  ментів(найлівішого від'ємного елемента і найправі-
//  шого від'ємного елемента) і впорядкувати елементи,
//  що знаходяться між ними.
void findNegativeBorder(int arr[], int size) {
    int j, temp, index = 1;
    int left = 0, right = size - 1;
    for (int i = 0; i < size; i++)
    {

    }



    do {
        for (j = right; j >= left; j--) {
            if (arr[j - 1] > arr[j]) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }index = j;
        }
        left = index + 1;
        for (j = left; j <= right; j++)
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


// На додаткові 12 балів:
// 3. Дан масив із 20 цілих чисел зі значеннями від 1 до 20.
// Необхідно :
// ■ написати функцію, що розкидає елементи масиву
// довільним чином;
// ■ створити випадкове число з того ж діапазону і знайти
// позицію цього випадкового числа в масиві;
// ■*** відсортувати елементи масиву, що знаходяться зліва
// від знайденої позиції за спаданням, а елементи ма -
// сиву, що знаходяться справа від знайденої позиції,
// за зростанням.
void RandArr(int arr[], int size) {
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}














int main()
{
    srand(time(0));
    cout << "Hello World!" << endl;

    const int size = 24;
    int arr[size]{};
    int arr1[size]{};
    int choice;

    //InitArr(arr, size);
    //ShowArr(arr, size);

    /*
    cout << "Enter sort option: "; cin >> choice;
    sortArray(arr, size, choice);
    ShowArr(arr, size);
    cout << "Enter sort option: "; cin >> choice;
    sortArray(arr, size, choice);
    ShowArr(arr, size);
    */

    InitArr1(arr1, size);
    ShowArr(arr1, size);

    RandArr(arr1, size);
    ShowArr(arr1, size);

}
