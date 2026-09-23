#include <iostream>
using namespace std;

int main()
{
    long num;
    int i = 1;
    cout << " " << "Enter Your number: "; cin >> num;
    cout << " " << "Your num: " << num << endl;
    do {
        if (num % 2 == 0) {
            cout << " " << i << ". " << num << " / 2 = " << num / 2 << endl;
            num /= 2;
        }
        else if (num % 2 != 0) {
            cout << " " << i << ". (" << num << " * 3 ) + 1 = " << (num * 3) + 1 << endl;
            num = (num * 3) + 1;
        }
        else {
            cout << "Error!" << endl;
        }
        i++;
    } while (num > 1);
}
