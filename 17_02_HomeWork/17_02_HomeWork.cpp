#include <iostream>
#include <fstream>
using namespace std;

const char* file = "text.txt";


int main()
{
    
    // Запис тексту у файл
    // 1.Створи програму, яка записує у файл text.txt 5 рядків тексту, введених користувачем.
    // Обов*язково перевірити чи файл існує
    char text1[255], text2[255], text3[255], text4[255], text5[255];
    cout << "Enter 1 line: "; cin.getline(text1, 255);
    cout << "Enter 2 line: "; cin.getline(text2, 255);
    cout << "Enter 3 line: "; cin.getline(text3, 255);
    cout << "Enter 4 line: "; cin.getline(text4, 255);
    cout << "Enter 5 line: "; cin.getline(text5, 255);
    ofstream out(file, ios_base::out);
    if (out.is_open()) {
        out << text1 << endl;
        out << text2 << endl;
        out << text3 << endl;
        out << text4 << endl;
        out << text5 << endl;
    }
    else cout << "Error!" << endl;
    out.close();

    // Читання з файлу
    // 2.Створи програму, яка відкриває файл text.txt і виводить весь його вміст на екран.
    // Обов*язково перевірити чи файл існує та зчитати інформацію до кінця файлу
    char buf[255];
    ifstream in(file, ios_base::in);
    if (in.is_open()) {
        while (!in.eof()) {
            in.getline(buf, 255);
            cout << buf << endl;
        }
    }
    else cout << "File not exist!" << endl;
    in.close();




}