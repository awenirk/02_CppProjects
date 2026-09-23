#include <iostream>
using namespace std;

// 1.Дано три числа.Оголосити вказівники на ці числа.Отримати добуток трьох
// заданих чисел, середє арифметичне, найменше з них, користуючись
// непрямим доступом до чисел(через вказівники).
int Dobutok(int *a, int *b, int *c) {
    int num;
    num = *a * *b * *c;
    return num;
}
int Aref(int *a, int *b, int *c) {
    int num;
    num = (*a * *b * *c) / 3;
    return num;
}
int* Min(int* a, int* b, int* c) {
    if (*a < *b and *a < *c) return a;
    if (*b < *a and *b < *c) return b;
    if (*c < *b and *c < *a) return c;
}

// 2.Дано цілочисельний одновимірний масив.Заповнити його,
// вивести на екран у прямому та зворотньому порядку та порахувати
// суму елементів з використанням вказівників.
void InitArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = 1 + rand() % 100;
    }
}
void ShowArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
void ShowArrayReverse(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + size - 1) << " ";
        arr--;
    }
    cout << endl;
}
int SumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// 3.Дано одновимірний масив.Знайти найбільше та найменше значення у
// масиві та поміняти їх у масиві місцями.Вивести перетворений масив на екран.
int* MaxArray(int* arr, int size) {
    int* max = arr;
    for (int i = 0; i < size; i++) {
        if (*max < *(arr + i)) max = (arr + i);
    }
    return max;
}
int* MinArray(int* arr, int size) {
    int* min = arr;
    for (int i = 0; i < size; i++) {
        if (*min > *(arr + i)) min = (arr + i);
    }
    return min;
}
void Change(int* arr, int* maxIndex, int* minIndex) {
    int temp = *maxIndex;
    *maxIndex = *minIndex;
    *minIndex = temp;
}

// 4.Дано масив цілих чисел.Користуючись вказівниками, поміняти місцями елементи
// масиву з парними и непарними індексами(тобто ті елементи масиву, які стоять
// на парних місцях, поміняти з елементами, які стоять на непарних місцях).
void ChangeOdd(int* arr, int size) {
    for (int i = 0; i < size; i += 2) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
}



int main()
{
    srand(time(0));
    const int size = 10;
    int a = 5, b = 5, c = 5;
    int* pa = &a, *pb = &b, *pc = &c;
    int arr[size] = {};
    int* parr = arr;
    int* MaxIndex, *MinIndex;
    cout << "Hello World!" << endl;

    // Task 1
    /*
    cout << dobutok(pa, pb, pc) << endl;
    cout << Min(pa, pb, pc) << endl;
    cout << Aref(pa, pb, pc) << endl;
    */

    // Task 2
    /*
    InitArray(parr, size);
    ShowArray(parr, size);
    ShowArrayReverse(parr, size);
    cout << SumArray(parr, size) << endl;
    */

    // Task 3
    /*
    InitArray(parr, size);
    ShowArray(parr, size);

    MaxIndex = MaxArray(parr, size);
    MinIndex = MinArray(parr, size);
    cout << "Max in Array: " << *MaxIndex << endl;
    cout << "Max in Array: " << *MinIndex << endl;

    Change(parr, MaxIndex, MinIndex);
    ShowArray(parr, size);
    */

    // Task 4
    /*
    InitArray(parr, size);
    ShowArray(parr, size);

    ChangeOdd(parr, size);

    ShowArray(parr, size);
    */

}
