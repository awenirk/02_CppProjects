#include <iostream>
#include <conio.h>
using namespace std;

void clear(){ system("cls"); }
void Change(int& a) { // Address
    a++;
}

int& findMax(int& a, int& b) {
    if (a > b) return a;
    else return b;
}

void test1() {
    const int size = 10;
    int arr[size] = {};
}
void test2() {
    int size = 10;
    // cin >> size;
    int *arr = new int[size];
    delete[]arr;
}
int* CreateArray(int size) {
    int* arr = new int[size];
    return arr;
}
void InitArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* AddNewNumber(int* arr, int *size, int number) {
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




int main()
{
    // Static Stack Heap
    

    // heap / kucha / RAM memory

    int size = 3;
    int* arr = CreateArray(size);
    InitArray(arr, size);
    ShowArray(arr, size);

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "Do you want add number ? y/n : ";
        choice = _getch();
        cout << endl;
        if (choice == 'n') {
            system("cls");
            cout << "Your Array:" << endl;
            ShowArray(arr, size);
            break;
        }
        
        cout << "Enter number : "; cin >> number;
        arr = AddNewNumber(arr, &size, number);
        clear();
        ShowArray(arr, size);
    }






    delete[]arr;


    /*
    
    int a = 10;

    int* pa = new int(15);// Heap
    int* pb = new int; // Heaap
    int* pc = nullptr; // Stack

    *pb = 5;
    pc = new int(12);

    cout << "pa = " << pa << endl;
    cout << "pb = " << pb << endl;
    cout << "pc = " << pc << endl;

    cout << "pa = " << *pa << endl;
    cout << "pb = " << *pb << endl;
    cout << "pc = " << *pc << endl;

    delete pc;
    pc = new int(55);

    InitArray();
    ShowArray();
    InitArray();



    delete pa;
    delete pb;
    delete pc;
    */








    /*
    // Pointers ... links
    int a = 8;   // variable
    int* pa = &a; // pointer
    int& la = a;  // ling
    cout << "a = " << a << endl;
    cout << "pa = " << pa << endl;
    cout << "*pa = " << *pa << endl;
    cout << "la = " << la << endl;

    cout << endl;

    int b = 10;

    //int* pb; // Tak ne nado
    int* pb = nullptr; // tak nado

    pb = &b;
    // int& lb; <-- Nemona
    int& lb = b;
    cout << "lb = " << lb << endl;
    // lb = a; // tak ne nada
    cout << "lb = " << lb << endl;

    cout << "a = " << a << endl;
    Change(a);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    findMax(a, b) = 80;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    */


}
