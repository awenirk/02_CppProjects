#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;
/*
Завдання 1. Розробіть програму «Бібліотека». Створіть
структуру «Книга» (назва, автор, видавництво, жанр,
рік видання, price).
Створіть масив з 10 книг (dynamic memory). Реалізуйте для нього такі
можливості:
-------------------------------
■ Друк усіх книг;(Show);
■ Редагувати книгу;(ChangeData)
-------------------------------
■ Пошук книг за автором;
■ Пошук книги за назвою;
■ Пошук книги за видавництвом
■ Пошук книги за жанром
-------------------------------
■ Змінити ціну книги
--------- 12 додаткові --------
■ Add new book
■ Delete book
*/
struct Table {
    int n1, n2, n3, n4, n5, n6, n7;
    const char* t1, *t2, *t3, *t4, *t5, *t6, *t7;
};
// ---------------------------
void BegginLine(Table& T) {
    cout << (char)201;
    for (int i = 0; i < T.n1; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < T.n2; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < T.n3; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < T.n4; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < T.n5; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < T.n6; i++)
        cout << (char)205;
    cout << (char)203;
    for (int i = 0; i < T.n7; i++)
        cout << (char)205;
    cout << (char)187 << endl;
}
void textLine(Table& T) {
    cout << (char)186 << " " << left << setw(T.n1 - 1) << T.t1;
    cout << (char)186 << " " << left << setw(T.n2 - 1) << T.t2;
    cout << (char)186 << " " << left << setw(T.n3 - 1) << T.t3;
    cout << (char)186 << "  " << left << setw(T.n4 - 2) << T.t4;
    cout << (char)186 << " " << left << setw(T.n5 - 1) << T.t5;
    cout << (char)186 << " " << left << setw(T.n6 - 1) << T.t6;
    cout << (char)186 << " " << left << setw(T.n7 - 1) << T.t7;
    cout << (char)186 << endl;
}
void fillLine(Table& T) {
    cout << (char)204;
    for (int i = 0; i < T.n1; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < T.n2; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < T.n3; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < T.n4; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < T.n5; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < T.n6; i++)
        cout << (char)205;
    cout << (char)206;
    for (int i = 0; i < T.n7; i++)
        cout << (char)205;
    cout << (char)185 << endl;
}
void EndLine(Table& T) {
    cout << (char)200;
    for (int i = 0; i < T.n1; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < T.n2; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < T.n3; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < T.n4; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < T.n5; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < T.n6; i++)
        cout << (char)205;
    cout << (char)202;
    for (int i = 0; i < T.n7; i++)
        cout << (char)205;
    cout << (char)188 << endl;
}
// ---------------------------
struct Book {
    int id;
    char name[50];
    char author[50];
    char publisher[50];
    char genre[50];
    int year;
    float price;
};
// ---------------------------
void ShowBook(Book& book, Table& T) {
    cout << (char)186 << " " << left << setw(T.n1 - 1) << book.id;
    cout << (char)186 << " " << left << setw(T.n2 - 1) << book.name;
    cout << (char)186 << " " << left << setw(T.n3 - 1) << book.author;
    cout << (char)186 << " " << left << setw(T.n4 - 1) << book.publisher;
    cout << (char)186 << " " << left << setw(T.n5 - 1) << book.genre;
    cout << (char)186 << " " << left << setw(T.n6 - 1) << book.year;
    cout << (char)186 << " " << left << setw(T.n7 - 1) << book.price;
    cout << (char)186 << endl;
}
void ChangeBookPrice(Book* library, int size, int id, Table& T) {
    for (int i = 0; i < size; i++) {
        if (library[i].id == id) {
            BegginLine(T);
            ShowBook(library[i], T);
            EndLine(T);

            cout << "Enter new price: ";
            cin >> library[i].price;

            BegginLine(T);
            ShowBook(library[i], T);
            EndLine(T);
        }
    }
}
// ---------------------------
void ShowAllBooks(Book* library, int size, Table& T) {
    BegginLine(T);
    textLine(T);
    fillLine(T);

    bool X = false;
    for (int i = 0; i < size; i++) {
        ShowBook(library[i], T);
        if (i == size - 1) X = true;
        if (X != true) {
            fillLine(T);
        }
    }
    EndLine(T);
}
// ---------------------------
void seartchByAuthor(char author[], Book* library, int size, Table& T) {
    Book* tempLibrary = new Book[size];
    int tempSize = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(library[i].author, author) == 0) {
            tempLibrary[tempSize] = library[i];
            tempSize++;
        }
    }
    ShowAllBooks(tempLibrary, tempSize, T);
    delete[] tempLibrary;
}
void seartchByName(char name[], Book* library, int size, Table& T) {
    Book* tempLibrary = new Book[size];
    int tempSize = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(library[i].name, name) == 0) {
            tempLibrary[tempSize] = library[i];
            tempSize++;
        }
    }
    ShowAllBooks(tempLibrary, tempSize, T);
    delete[] tempLibrary;
}
void seartchByPublisher(char publisher[], Book* library, int size, Table& T) {
    Book* tempLibrary = new Book[size];
    int tempSize = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(library[i].publisher, publisher) == 0) {
            tempLibrary[tempSize] = library[i];
            tempSize++;
        }
    }
    ShowAllBooks(tempLibrary, tempSize, T);
    delete[] tempLibrary;
}
void seartchByGenre(char genre[], Book* library, int size, Table& T) {
    Book* tempLibrary = new Book[size];
    int tempSize = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(library[i].genre, genre) == 0) {
            tempLibrary[tempSize] = library[i];
            tempSize++;
        }
    }
    ShowAllBooks(tempLibrary, tempSize, T);
    delete[] tempLibrary;
}
// ---------------------------
Book EnterBook() {
    Book book;
    cout << "Enter id: "; cin >> book.id;
    cout << "Enter name: "; cin >> book.name;
    cout << "Enter author: "; cin >> book.author;
    cout << "Enter publisher: "; cin >> book.publisher;
    cout << "Enter genre: "; cin >> book.genre;
    cout << "Enter year: "; cin >> book.year;
    cout << "Enter price: "; cin >> book.price;
    return book;
}
Book* AddNewBook(Book* library, int& size, Book book) {
    Book* NewLibrary = new Book[size + 1];
    for (int i = 0; i < size; i++)
        NewLibrary[i] = library[i];

    NewLibrary[size] = book;
    size++;

    delete[] library;

    return NewLibrary;
}
Book* DeleteLastBook(Book* library, int& size) {
    Book* NewLibrary = new Book[size - 1];
    for (int i = 0; i < size - 1; i++)
        NewLibrary[i] = library[i];
    size--;
    delete[] library;

    return NewLibrary;
}
// ---------------------------
int main()
{
    int size = 10;
    int choice, id;
    char temp[50];
    Book book;
    Table T = {
        5, 8, 15, 21, 11, 6, 12,
        "Id", "Name", "Author", "Publisher", "Genre", "Year", "Price"
    };
    Book* library = new Book[size]{
    { 1, "Book1", "Author1", "Publisher1", "Fantasy", 2001, 15.5 },
    { 2, "Book2", "Author2", "Publisher2", "Drama", 2005, 22.0 },
    { 3, "Book3", "Author3", "Publisher3", "Detective", 2010, 18.75 },
    { 4, "Book4", "Author4", "Publisher4", "Adventure", 2012, 30.5 },
    { 5, "Book5", "Author5", "Publisher5", "Romance", 2015, 12.99 },
    { 6, "Book6", "Author6", "Publisher6", "Horror", 2017, 25.0 },
    { 7, "Book7", "Author7", "Publisher7", "Comedy", 2019, 19.5 },
    { 8, "Book8", "Author8", "Publisher8", "History", 2020, 35.25 },
    { 9, "Book9", "Author9", "Publisher9", "Sci-Fi", 2022, 28.75 },
    { 10, "Book10", "Author10", "Publisher10", "Mystery", 2024, 40.0 }
    };

    do {
        system("cls");
        cout << "----------- Menu -----------" << endl;
        cout << "Show all books           [1]" << endl;
        cout << "Edit book price          [2]" << endl;
        cout << "Search by author         [3]" << endl;
        cout << "Search by name           [4]" << endl;
        cout << "Search by publisher      [5]" << endl;
        cout << "Search by genre          [6]" << endl;
        cout << "Add book                 [7]" << endl;
        cout << "Delete last book         [8]" << endl;
        cout << "Exit                     [0]" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 0:
            cout << "Have a nice day!!" << endl;
            break;
        case 1:
            ShowAllBooks(library, size, T);
            break;
        case 2:
            cout << "Enter book id: ";
            cin >> id;
            ChangeBookPrice(library, size, id, T);
            break;
        case 3:
            cout << "Enter book author: ";
            cin.getline(temp, 50);
            seartchByAuthor(temp, library, size, T);
            break;
        case 4:
            cout << "Enter book name: ";
            cin.getline(temp, 50);
            seartchByName(temp, library, size, T);
            break;
        case 5:
            cout << "Enter book publisher: ";
            cin.getline(temp, 50);
            seartchByPublisher(temp, library, size, T);
            break;
        case 6:
            cout << "Enter book genre: ";
            cin.getline(temp, 50);
            seartchByGenre(temp, library, size, T);
            break;
        case 7:
            book = EnterBook();
            library = AddNewBook(library, size, book);
            cout << "Book successfully added!" << endl;
            break;
        case 8:
            library = DeleteLastBook(library, size);
            cout << "Last book successfully deleted!" << endl;
            break;
        default:
            cout << "Error!" << endl;
            break;
        }
        if (choice != 0) {
            cout << "Press any key to continue...";
            _getch();
        }

    } while (choice != 0);

    delete[] library;
}