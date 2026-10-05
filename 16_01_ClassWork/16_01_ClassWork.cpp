#include <iostream>
#include <conio.h>
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
void ShowBook(Book &book) {
	cout << "Id: " << book.id << endl;
	cout << "Name: " << book.name << endl;
	cout << "Author: " << book.author << endl;
	cout << "Publisher: " << book.publisher << endl;
	cout << "Genre: " << book.genre << endl;
	cout << "Year: " << book.year << endl;
	cout << "Price: $" << book.price << endl;
}
// ---------------------------
void seartchByAuthor(char author[], Book* books, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(books[i].author, author) == 0)
			ShowBook(books[i]);
	}
}
void seartchByName(char name[], Book* books, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(books[i].name, name) == 0)
			ShowBook(books[i]);
	}
}
void seartchByPublisher(char publisher[], Book* books, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(books[i].publisher, publisher) == 0)
			ShowBook(books[i]);
	}
}
void seartchByGenre(char genre[], Book* books, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(books[i].genre, genre) == 0)
			ShowBook(books[i]);
	}
}
// ---------------------------
void ChangeBookPrice(Book* book, int size, int id) {
	for (int i = 0; i < size; i++) {
		if (book[i].id == id) {
			ShowBook(book[i]);
			cout << "Ente new price: ";
			cin >> book[i].price;
			ShowBook(book[i]);
		}
	}
}
// --------------------------- tut dorobity
Book EnterBook() {
	Book book;
	cout << "Id: " << book.id << endl;
	cout << "Name: " << book.name << endl;
	cout << "Author: " << book.author << endl;
	cout << "Publisher: " << book.publisher << endl;
	cout << "Genre: " << book.genre << endl;
	cout << "Year: " << book.year << endl;
	cout << "Price: $" << book.price << endl;
	return book;
}
void AddNewBook(Book* book, int size, ) {}
void DeleteBook() {}


int main()
{
	int size = 10;
	int choice, id;
	Book* books = new Book[size]{
		{ 0, "Book1", "Author1", "Publisher1", "Genre1", 2000, 15.5 }
	};


	do
	{
		system("cls");
		cout << "----------- Menu -----------" << endl;
		cout << "Show all books           [1]" << endl;
		cout << "Search by name           [2]" << endl;
		cout << "Search by director       [3]" << endl;
		cout << "Search by genre          [4]" << endl;
		cout << "Most popular film        [5]" << endl;
		cout << "Change info about film   [5]" << endl;
		cout << "Exit                     [0]" << endl;

		cout << "Enter your choice: "; cin >> choice;
		cin.ignore();
		switch (choice) {
		case 0:
			cout << "Have a nice day!!" << endl;
			break;
		case 1:
			for (int i = 0; i < size; i++) {
				ShowFilm(films[i]);
			}
			break;
		case 2:
			cout << "Enter films name: ";
			cin.getline(name, 50);
			seartchByName(name, films, size);
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












	delete[] books;
}