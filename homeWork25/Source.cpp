//Home Work 25.
#include <iostream>
using namespace std;

struct movies {
	string title;//название фильма
	int year;//год выхода фильма
	string genre;//жанр фильма
	unsigned int duration;//продолжительность фильма в минутах
	unsigned int price;//цена за диск фильма
};

void showMovie(movies& mov);
movies expensive(movies& mov1, movies& mov2, movies& mov3);
void updateInfo(movies& m);

int main() {
	//Task 1.
	movies mov1, mov2, mov3;
	cout << "Task 1\n";
	mov1 = { "The Four Feathers", 2002, "Adventure", 125, 7 };
	mov2 = { "Stardust", 2007, "Fantasy", 127, 8 };
	mov3 = { "Cold Mountain", 2003, "Drama", 148, 9 };

	showMovie(mov1); cout << endl << endl;
	showMovie(mov2); cout << endl << endl;
	showMovie(mov3); cout << endl << endl;
	//Task 2.
	cout << "Task 2\n";
	movies max = expensive(mov1, mov2, mov3);
	cout << "Most expensive movie disk:\t" << max.price << " $" << "\n\n";
	//Task 3.
	cout << "\nTask 3.\n";
	updateInfo(mov2);
	cout << endl;
	showMovie(mov2);
	cout << endl;

	return 0;
}
//Task 1.
void showMovie(movies& mov) {
	cout << "Name of the movie\t\t" << mov.title << "\nYear of release of the film\t" << mov.year << "\nGenre of the film\t\t" << mov.genre << endl;
	cout << "Duration of the film\t\t" << mov.duration << " min" << "\nPrice per movie disc\t\t" << mov.price << " $";
}
//Task 2.
movies expensive(movies& mov1, movies& mov2, movies& mov3) {
	if (mov1.price > mov2.price && mov1.price > mov3.price)
		return mov1;
	if (mov2.price > mov1.price && mov2.price > mov3.price)
		return mov2;
	return mov3;
}
//Task 3.
void updateInfo(movies& m) {
	int newInfo;
	cout << "Choose which variable you want to change?";
	cout << "\n1.Title;\n2.Year of release;\n3.Genre;\n4.Duration;\n5.Price per disk;\n";
	cin >> newInfo;
	switch (newInfo) {
	case 1: cout << "Enter a new movie title: ";
		cin >> m.title; break;
	case 2: cout << "Enter a new release year: ";
		cin >> m.year; break;
	case 3: cout << "Enter a new genre: ";
		cin >> m.genre; break;
	case 4: cout << "Enter a new movie duration: ";
		cin >> m.duration; break;
	case 5: cout << "Enter a new price per disk: ";
		cin >> m.price; break;
	default: cout << "Input error!"; break;
	};
};