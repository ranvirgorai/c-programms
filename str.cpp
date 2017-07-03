#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movies_t {
	int year;
	string title;
} mine,yours;

void printMovie(movies_t movie);

int main (){
	string mystr;
	mine.title="Are You Ready";
	mine.year=1986;
	cout<<"Enter Movie title which you like: ";
	getline (cin,yours.title);
	cout<<"Enter year: ";
	getline (cin,mystr);
	stringstream(mystr) >>yours.year;

	cout<<" \n My Favourite movie is:\n";
	printMovie(mine);

	cout<<"\n And yours is : \n";
	printMovie(yours);
	return 0;

}

void printMovie(movies_t movie){
	cout <<"Movie title" << movie.title;
	cout <<"Movie year" << movie.year;
}
