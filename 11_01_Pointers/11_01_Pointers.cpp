#include <iostream>
using namespace std;

void Change(int a) {
    a++;
}
void Change(int *a) { // Address
    (*a)++;
}

int FindMax3(int a, int b, int c) {
    if (a > b and a > c) return a;
    if (b > a and b > c) return b;
    if (c > b and c > a) return c;
}
int* FindMax3(int *a, int *b, int *c) {
    if (*a > *b and *a > *c) return a;
    if (*b > *a and *b > *c) return b;
    if (*c > *b and *c > *a) return c;
}

void InitArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 100;
    }
}
void ShowArray(int* arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int* MaxInArr(int* arr, int size) {
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
            max = arr + i;
    }
    return max;
}



int main()
{
    /*
    int a = 5, b = 8, c = 9;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    int max = FindMax3(a, b, c);
    max++;
    cout << "Max = " << max << endl;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    int* maxptr = FinMax3(&a, &b, &c);
    cout << "MAx element : " << *maxptr << endl;
    (*maxptr)++;
    cout << "MAx element : " << *maxptr << endl;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    */



}

/*
int main()
{
    srand(time(0));

    int a = 5;
    int* pa = &a;

    int b = 10;
    int* pb = &b;

    // * - Rozimenuvannya
    // & - Ampersend / ampersand

    // cout << "a = " << a << endl;
    // Change(a);
    // cout << "a = " << a << endl;
    // Change(a);
    // cout << "a = " << a << endl;
    // cout << "pa = " << pa << endl;
    // cout << "*pa = " << *pa << endl;
    // cout << "b = " << b << endl;
    // cout << "pb = " << pb << endl;
    // cout << "*pb = " << *pb << endl;

    cout << a + b << endl;
    cout << *pa + *pb << endl;

    pa = &b;

    // cout << "b = " << b << endl;
    // cout << "*pb = " << *pb << endl;
    // cout << "*pa = " << *pa << endl;

    *pa += 2;

    // cout << "b = " << b << endl;
    // cout << "*pb = " << *pb << endl;
    // cout << "*pa = " << *pa << endl;

    

    const int size = 10;
    int arr[size]{};
    int* parr = &arr[0];

    cout << arr[0] << endl;
    cout << parr << endl;

    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    
    cout << endl;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 100;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << parr << endl;
    cout << *parr << endl;
    cout << parr + 1 << endl;
    cout << *parr + 1 << endl;

    for (int i = 0; i < size; i++) {
        *(parr + i) = rand() % 100;
    }
    for (int i = 0; i < size; i++) {
        cout << *(parr + i) << " ";
    }
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        *parr = rand() % 100;
        parr++;
    }

    // odne i te same
    parr = &arr[0];
    parr = arr;
    // odne i te same

    for (int i = 0; i < size; i++) {
        cout << *parr << " ";
        parr++;
    }
    parr--;
    cout << endl;
    int* newptr = arr;
    *newptr = 0;
    newptr += 3;
    *newptr = 0;

    for (int i = 0; i < size; i++) {
        cout << *parr << " ";
        parr--;
    }
    cout<<endl;
}
*/