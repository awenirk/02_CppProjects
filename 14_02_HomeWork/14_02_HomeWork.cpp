#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


// 4.Написати функцію, яка отримує рядок і повертає довжину рядка.
// Без використання функції strlen()







int main()
{
    char text[] = "Today I went to the park and played football with my friends";
    int numA = 0, numO = 0,
        numLetters = 0, numDigit = 0, numSpaces = 0,
        isDel = 0,
        numVowels = 0, numConsonants = 0, numPunctuation = 0;
    char symbol = 'W';
    // 1.Вводиться рядок.Яких букв у рядку більше ’а’ чи ’о’ ?
    
    //cout << "Enter Line: "; cin.getline(text, 255);
    cout << endl << text << endl;
    
    for (int i = 0; i < sizeof(text); i++) {
        if (text[i] == 'a' or text[i] == 'A')
            numA++;
        else if (text[i] == 'o' or text[i] == 'O')
            numO++;
    }

    cout << "In this line: " << numA << " letters A" << endl;
    cout << "In this line: " << numO << " letters O" << endl;

    // 2.Вводиться рядок.Порахувати кількість латинських букв, цифр та пробілів у рядку.
    
    // cout << endl << "Enter Line: "; cin.getline(text, 255);
    cout << endl << "Your text : " << text << endl;
    for (int i = 0; i < strnlen_s(text, 255); i++) {
        if (isalpha(text[i])) numLetters++;
        if (isdigit(text[i])) numDigit++;
        if (isspace(text[i])) numSpaces++;
    }
    cout << "Count letters -> " << numLetters << endl;
    cout << "Count nums -> " << numDigit << endl;
    cout << "Count spaces -> " << numSpaces << endl;

    // 3.Дано рядок.Замінити у рядку всі великі букви на малі і навпаки.
    cout << endl << "First text : " << text << endl;
    for (int i = 0; i < strnlen_s(text, 255); i++) {
        if (isupper(text[i]))
            text[i] = tolower(text[i]);
        else if (islower(text[i]))
            text[i] = toupper(text[i]);
    }
    cout << "Edited text: " << text << endl;



    // На додаткові 12 балів
    // 5 ***.Дано рядок.Видалити із рядка заданий символ.Результат розмістити у новому рядку.
    cout << endl << "Text : " << text << endl;
    // cout << "Enter symbol to delete: "; cin >> symbol;
    for (int i = 0; i < strnlen_s(text, 255); i++) {
        if (isDel) text[i] = text[i + 1];
        if (text[i] == symbol) {
            text[i] = text[i + 1];
            isDel++;
        }
    }
    cout << endl << "Text : " << text << endl;

    // 6 ***.Розробити програму, яка зчитує з екрану рядок, а потім видає статистику :
    // кількість пробільних символів(whitespaces), голосних, приголосних, знаків пунктуації.
    // Введення передбачається англомовним.
    // Hello
    // Helo

    char vowels[] = "aeiouAEIOU";
    char consonants[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    char punctuation[] = ".,!?;:'\"-()[]{}";

    cout << endl << "Text : " << text << endl;
    for (int i = 0; i < strnlen_s(text, 255); i++) {
        if (isspace(text[i])) numSpaces++;
        for (int j = 0; j < strnlen_s(vowels, sizeof(vowels)); j++)
            if (text[i] == vowels[j]) numVowels++;
        for (int j = 0; j < strnlen_s(consonants, sizeof(consonants)); j++)
            if (text[i] == consonants[j]) numConsonants++;
        for (int j = 0; j < strnlen_s(punctuation, sizeof(punctuation)); j++)
            if (text[i] == punctuation[j]) numPunctuation++;
    }
    cout << "Count spaces -> " << numSpaces << endl;
    cout << "Count volwels -> " << numVowels << endl;
    cout << "Count consonants -> " << numConsonants << endl;
    cout << "Count punctuation marks -> " << numPunctuation << endl;


    // _strupr_s();
    // _strlwr_s();
    // _strrev();
}