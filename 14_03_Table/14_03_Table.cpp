#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void print() {
    for (int i = 180; i < 210; i++) {
        cout << i << " --> " << (char)i << endl;
    }
}

void BegginLine(int n1, int n2, int n3, int n4, int n5) {
    cout << (char)201;
    for (int i = 0; i < n1; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < n2; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < n3; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < n4; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < n5; i++)
        cout << (char)205;
    cout << (char)187 << endl;
}
void fillLine(int n1, int n2, int n3, int n4, int n5) {
    cout << (char)204;
    for (int i = 0; i < n1; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < n2; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < n3; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < n4; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < n5; i++)
        cout << (char)205;
    cout << (char)185 << endl;
}
void textLine(int n1, int n2, int n3, int n4, int n5, char* t1, char* t2, char* t3, char* t4, char* t5) {
    cout << (char)186;
    cout << " " << left << setw(n1-1) << t1;
    cout << (char)186;
    cout << " " << left << setw(n2-1) << t2;
    cout << (char)186;
    cout << " " << left << setw(n3-1) << t3;
    cout << (char)186;
    cout << "  " << left << setw(n4-2) << t4;
    cout << (char)186;
    cout << " " << left << setw(n5-1) << t5;
    cout << (char)186 << endl;
}
void EmptyLine(int n1, int n2, int n3, int n4, int n5) {
    cout << (char)186;
    for (int i = 0; i < n1; i++)
        cout << " ";
    cout << (char)186;
    for (int i = 0; i < n2; i++)
        cout << " ";
    cout << (char)186;
    for (int i = 0; i < n3; i++)
        cout << " ";
    cout << (char)186;
    for (int i = 0; i < n4; i++)
        cout << " ";
    cout << (char)186;
    for (int i = 0; i < n5; i++)
        cout << " ";
    cout << (char)186 << endl;
}
void EndLine(int n1, int n2, int n3, int n4, int n5) {
    cout << (char)200;
    for (int i = 0; i < n1; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < n2; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < n3; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < n4; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < n5; i++)
        cout << (char)205;
    cout << (char)188 << endl;
}

int main()
{
    int n1 = 5, n2 = 7, n3 = 20, n4 = 11, n5 = 11;
    char t1[63] = "No";
    char t2[63] = "Item";
    char t3[63] = "Description";
    char t4[63] = "Quantity";
    char t5[63] = "Price";
    cout << "Hello World!" << endl;
    // print();
    
    BegginLine(n1, n2, n3, n4, n5);
    textLine(n1, n2, n3, n4, n5, t1, t2, t3, t4, t5);
    fillLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);

    strcpy_s(t1, sizeof(t1), "1");
    strcpy_s(t2, sizeof(t2), "P196");
    strcpy_s(t3, sizeof(t3), "Samsung Colour TV");
    strcpy_s(t4, sizeof(t4), "1");
    strcpy_s(t5, sizeof(t5), "$ 829.00");
    textLine(n1, n2, n3, n4, n5, t1, t2, t3, t4, t5);

    strcpy_s(t1, sizeof(t1), "2");
    strcpy_s(t2, sizeof(t2), "P020");
    strcpy_s(t3, sizeof(t3), "Uniden Handset");
    strcpy_s(t4, sizeof(t4), "1");
    strcpy_s(t5, sizeof(t5), "$  29.00");
    textLine(n1, n2, n3, n4, n5, t1, t2, t3, t4, t5);

    strcpy_s(t1, sizeof(t1), "3");
    strcpy_s(t2, sizeof(t2), "P111");
    strcpy_s(t3, sizeof(t3), "Folder Blank");
    strcpy_s(t4, sizeof(t4), "1");
    strcpy_s(t5, sizeof(t5), "$   2.70");
    textLine(n1, n2, n3, n4, n5, t1, t2, t3, t4, t5);

    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);

    fillLine(n1, n2, n3, n4, n5);
    EmptyLine(n1, n2, n3, n4, n5);

    EndLine(n1, n2, n3, n4, n5);

    /*
    201 --> ╔
    205 --> ═
    203 --> ╦
    187 --> ╗

    204 --> ╠
    186 --> ║
    185 --> ╣

    206 --> ╬

    200 --> ╚
    202 --> ╩
    188 --> ╝
    */
}
