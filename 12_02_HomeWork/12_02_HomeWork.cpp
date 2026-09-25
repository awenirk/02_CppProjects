#include <iostream>
using namespace std;

// 2.Написати функції для роботи з динамічним одновимірним масивом :

// 1 - Функція створення динамічного масиву вказаного розміру і
// Функція повертає адресу створеного масиву.
int* CreateArray(int size) {
    int* arr = new int[size];
    return arr;
}
// 2 - його заповнення випадковими числами.
void InitArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}
// 3 - Виводу масиву
void ShowArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// 4 - Доповнення масиву одним елементом.
// Функція отримує адресу масиву, розмір та елемент для доповнення.
int* AddNewNumber(int* arr, int* size, int number) {
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; i++) {
        temp[i] = arr[i];
    }
    temp[*size] = number;
    delete[]arr;
    (*size)++;
    arr = temp; // if & in arguments (arr)
    return arr;
}
// 5 - Видалення елемента з кінця.
int* DeleteLast(int* arr, int* size) {
    int* temp = new int[*size-1];
    for (int i = 0; i < *size-1; i++) {
        temp[i] = arr[i];
    }
    delete[]arr;
    (*size)--;
    arr = temp;
    return arr;
}
// 6 - Видалення елемента  за індексом.
int* DeleteIndex(int* arr, int* size, int index) {
    int* temp = new int[*size - 1];
    for (int i = 0; i < index; i++) {
        temp[i] = arr[i];
    }
    for (int i = index; i < *size - 1; i++) {
        temp[i] = arr[i+1];
    }
    delete[]arr;
    (*size)--;
    arr = temp;
    return arr;
}
// 7 - Вставка нового елемента у довільну допустиму позицію у масиві
int* InsertIndex(int* arr, int* size, int index, int num) {
    int* temp = new int[*size + 1];
    for (int i = 0; i < index; i++) {
        temp[i] = arr[i];
    }
    temp[index] = num;
    for (int i = index; i < *size; i++) {
        temp[i + 1] = arr[i];
    }
    delete[]arr;
    (*size)++;
    arr = temp;
    return arr;
}




int main()
{
    srand(time(0));


    // Task 1.
    
    // Створити 3 динамічних змінних різного типу.
    // Заповнити їх деякими значеннями.Обчислити і вивести на екран їх добуток,
    // а також самі значення динамічних змінних.

    /*
    int* pInt = new int(17);
    float* pFloat = new float(2.392);
    double* pDouble = new double(7.345633);
    
    cout << "Dobutok: " << ((*pInt) * (*pFloat) * (*pDouble)) << endl;

    cout << "pInt = " << *pInt << endl;
    cout << "pFloat = " << *pFloat << endl;
    cout << "pDouble = " << *pDouble << endl; // tut cout urizaye

    delete pInt;
    delete pFloat;
    delete pDouble;
    */



    // Task 2.
    // Меню

    /*
    */
    int num, size, index;
    int* pArr = nullptr;
    int choice = 1;
    cout << "1. Create Array" << endl;
    cout << "2. Init Array" << endl;
    cout << "3. Show Array" << endl;
    cout << "4. Add to Array" << endl;
    cout << "5. Delete last" << endl;
    cout << "6. Delete Index" << endl;
    cout << "7. Indert by index" << endl;
    cout << "0. Exit" << endl;
    while (choice!=0) {
        cout << endl << "Enter Your Choice: "; cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter size to Array: "; cin >> size;
            pArr = CreateArray(size);
            break;
        case 2:
            InitArray(pArr, size);
            break;
        case 3:
            ShowArray(pArr, size);
            break;
        case 4:
            cout << "Enter num to add: "; cin >> num;
            pArr = AddNewNumber(pArr, &size, num);
            ShowArray(pArr, size);
            break;
        case 5:
            pArr = DeleteLast(pArr, &size);
            ShowArray(pArr, size);
            break;
        case 6:
            cout << "Enter index to add: "; cin >> index;
            pArr = DeleteIndex(pArr, &size, index);
            ShowArray(pArr, size);
            break;
        case 7:
            cout << "Enter index to add: "; cin >> index;
            cout << "Enter num to add: "; cin >> num;
            pArr = InsertIndex(pArr, &size, index, num);
            ShowArray(pArr, size);
            break;
        }
    }
    delete[] pArr;
}
