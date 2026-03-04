#include <iostream>
#include <string>
using namespace std;

struct MovieData {
	string title;
	string director;
	int yearReleased;
	int runningTime;
};

void display(MovieData movie)
{
	cout << " Movie Title: " << movie.title << endl;
	cout << " Movie Director: " << movie.director << endl;
	cout << " Year Released: " << movie.yearReleased << endl;
	cout << " Running Time: " << movie.runningTime << " mins" << endl;
	cout << " ---------------------------------- " << endl;
}

int main()
{
	MovieData movie1, movie2;
	cout << " ================================== " << endl;
	cout << "           Movie Details            " << endl;
	cout << " ================================== " << endl;

	cout << " Enter Movie-1 Title: ";
	getline(cin, movie1.title);

	cout << " Enter Director: ";
	cin.ignore();
	getline(cin, movie1.director);

	cout << " Enter Year Released: ";
	cin >> movie1.yearReleased;

	cout << " Enter Running Time: ";
	cin >> movie1.runningTime;

	cout << " ---------------------------------- " << endl;

	cout << " Enter Movie-2 Title: ";
	cin.ignore();
	getline(cin, movie2.title);

	cout << " Enter Director: ";
	getline(cin, movie2.director);

	cout << " Enter Year Released: ";
	cin >> movie2.yearReleased;

	cout << " Enter Running Time: ";
	cin >> movie2.runningTime;

	cout << " ================================== " << endl;
	cout << "       Displaying Movie Data        " << endl;
	cout << " ================================== " << endl;
	display(movie1);
	display(movie2);
	cout << " ================================== " << endl;

	return 0;
}
