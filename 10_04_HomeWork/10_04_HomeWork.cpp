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

// 1. Íàïèñàòè ðåêóðñèâíó ôóíêö³þ çíàõîäæåííÿ ñòóïåíÿ ÷èñëà.
int Pow(int num, int step) {
    if (step <= 1)
        return num;
    return num * Pow(num, step - 1);
}
// 2. Íàïèñàòè ðåêóðñèâíó ôóíêö³þ, ÿêà âèâîäèòü N ç³ðîê
// ó ðÿä, ÷èñëî N çàäàº êîðèñòóâà÷.Ïðî³ëþñòðóéòå ðî -
// áîòó ôóíêö³¿ ïðèêëàäîì.
void Stars(int a)
{
    if (a == 0) {
        return;
    }
    cout << "* ";
    a--;
    Stars(a);
}
// 3. Íàïèñàòè ðåêóðñèâíó ôóíêö³þ, ÿêà îá÷èñëþº ñóìó
// âñ³õ ÷èñåë ó ä³àïàçîí³ â³ä a äî b.Êîðèñòóâà÷ ââîäèòü
// a ³ b.Ïðî³ëþñòðóéòå ðîáîòó ôóíêö³¿ ïðèêëàäîì.
int Summa(int a, int b) {
    if (b == a)
        return a;
    return a + Summa(a + 1, b);
}


// Íå îáîâÿçêîâå, àëå ÿ õî÷ó ïîïðîáóâàòè
// Çà áàæàííÿ íà äîäàòêâ³ 12 áàë³â.
// 4. Íàïèø³òü ðåêóðñèâíó ôóíêö³þ, ÿêà ïðèéìàº îäíîâè -
// ì³ðíèé ìàñèâ ç³ 100 ö³ëèõ ÷èñåë, çàïîâíåíèõ âèïàäêî -
// âèì ÷èíîì, ³ çíàõîäèòü ïîçèö³þ, ç ÿêî¿ ïî÷èíàºòüñÿ
// ïîñë³äîâí³ñòü ç 10 ÷èñåë, ñóìà ÿêèõ ì³í³ìàëüíà.
int SummaArr(int arr[], int index, int nums)
{
    if (nums == 1)
        return arr[index];
    nums--;
    return arr[index] + SummaArr(arr, index + 1, nums);
}
int indexMinSum(int arr[], int size, int index, int minSum, int minIndex) {
    int sum = SummaArr(arr, index, 10);
    cout << index + 1 << ". " << sum << endl;
    if (sum < minSum) {
        minSum = sum;
        minIndex = index;
    }
    if (index == 90) {
        return minIndex;
    }

    return indexMinSum(arr, size, index + 1, minSum, minIndex);
}


// Task 5
int Game() {
    int rod1[5] = { 5, 4, 3, 2, 1 };
    int rod2[5] = {};
    int rod3[5] = {};

    int count1 = 5;
    int count2 = 0;
    int count3 = 0;

    int from, where;
    int disc;
    bool canMove;

    while (count3 != 5)
    {
        cout << endl << "Rod 1: ";
        for (int i = 0; i < count1; i++)
            cout << rod1[i] << " ";
        cout << endl << "Rod 2: ";
        for (int i = 0; i < count2; i++)
            cout << rod2[i] << " ";
        cout << endl << "Rod 3: ";
        for (int i = 0; i < count3; i++)
            cout << rod3[i] << " ";

        cout << endl << endl << "From: "; cin >> from;
        cout << "Where: "; cin >> where;

        canMove = false;

        if (from == 1 && count1 != 0)
            disc = rod1[count1 - 1];
        else if (from == 2 && count2 != 0)
            disc = rod2[count2 - 1];
        else if (from == 3 && count3 != 0)
            disc = rod3[count3 - 1];
        else {
            cout << "Wrong move!" << endl;
            continue;
        }

        if (where == 1) {
            if (count1 == 0 || disc < rod1[count1 - 1])
                canMove = true;
        }
        else if (where == 2) {
            if (count2 == 0 || disc < rod2[count2 - 1])
                canMove = true;
        }
        else if (where == 3) {
            if (count3 == 0 || disc < rod3[count3 - 1])
                canMove = true;
        }

        if (canMove != true) {
            cout << "You can't put a bigger disk on a smaller one!" << endl;
            continue;
        }

        if (from == 1)
            count1--;
        else if (from == 2)
            count2--;
        else if (from == 3)
            count3--;

        if (where == 1) {
            rod1[count1] = disc;
            count1++;
        }
        else if (where == 2) {
            rod2[count2] = disc;
            count2++;
        }
        else if (where == 3) {
            rod3[count3] = disc;
            count3++;
        }
    }

    cout << endl << "Rod 1: ";
    for (int i = 0; i < count1; i++)
        cout << rod1[i] << " ";
    cout << endl << "Rod 2: ";
    for (int i = 0; i < count2; i++)
        cout << rod2[i] << " ";
    cout << endl << "Rod 3: ";
    for (int i = 0; i < count3; i++)
        cout << rod3[i] << " ";

    cout << endl << "YOU WIN!" << endl;

    return 0;
}


int main()
{
    cout << "Hello World!" << endl;
    const int size = 100;
    int arr[size]{};
    int a;

    /* Task 1
    a = Pow(10, 3);
    cout << a << endl;
    */

    /* Task 2
    Stars(7);
    */

    /* Task 3
    a = Summa(3, 7);
    cout << a << endl;
    */

    /* Task 4
    InitArr(arr, size);
    ShowArr(arr, size);

    cout << endl;
    a = indexMinSum(arr, size, 0, SummaArr(arr, 0, 10), 0);
    cout << a << endl;
    */

    /* Task 5
    */
    Game();
}