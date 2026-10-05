#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct Film {
	int id;
	char name[50];
	char director[50];
	char genre[50];
	float stars;
	float price;
};

void ShowFilm(Film& film) {
	cout << "Id: " << film.id << endl;
	cout << "Name: " << film.name << endl;
	cout << "Director: " << film.director << endl;
	cout << "Genre: " << film.genre << endl;
	cout << "Stars: " << film.stars << endl;
	cout << "Price: $" << film.price << endl;
}
void seartchByName(char name[], Film* films, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(films[i].name, name) == 0)
			ShowFilm(films[i]);
	}
}
void seartchByDirector(char director[], Film* films, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(films[i].director, director) == 0)
			ShowFilm(films[i]);
	}
}
void seartchByGenre(char genre[], Film* films, int size) {
	for (int i = 0; i < size; i++) {
		if (strcmp(films[i].genre, genre) == 0)
			ShowFilm(films[i]);
	}
}
void seartchMostPopularInGenre(char genre[], Film* films, int size) {
	float max = 0;
	int max_index = 0;
	for (int i = 0; i < size; i++) {
		if (strcmp(films[i].genre, genre) == 0) {
			if (films[i].stars > max) {
				max = films[i].stars;
				max_index = i;
			}
		}
	}
	ShowFilm(films[max_index]);
}
void changeFilm(Film* films, int size, int id) {
	for (int i = 0; i < size; i++) {
		if (films[i].id == id) {
			ShowFilm(films[i]);
			cout << "Ente new rating: ";
			cin >> films[i].stars;
			cout << "Ente new price: ";
			cin >> films[i].price;
			ShowFilm(films[i]);
		}
	}
}

int main()
{
	const int size = 6;
	int choice, id;
	char name[50];
	Film films[size] = {
		{0, "Back to future","Tom Kruise", "Fantasy", 8.2, 102.99},
		{1, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 250.0},
		{2, "The Matrix", "Lana Wachowski", "Action", 8.7, 200.0},
		{3, "Interstellar", "Christopher Nolan", "Sci-Fi", 8.6, 300.0},
		{4, "The Godfather", "Francis Ford Coppola", "Crime", 9.2, 180.0},
		{5, "Titanic", "James Cameron", "Drama", 7.9, 220.0}
	};

	do
	{
		system("cls");
		cout << "----------- Menu -----------" << endl;
		cout << "Show all films           [1]" << endl;
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
		case 3:
			cout << "Enter film`s director: ";
			cin.getline(name, 50);
			seartchByDirector(name, films, size);
			break;
		case 4:
			cout << "Enter film`s genre: ";
			cin.getline(name, 50);
			seartchByGenre(name, films, size);
			break;
		case 5:
			cout << "Enter film`s genre: ";
			cin.getline(name, 50);
			seartchMostPopularInGenre(name, films, size);
			break;
		case 6:
			cout << "Enter film`s id: "; cin >> id;
			changeFilm(films, size, id);
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

}
