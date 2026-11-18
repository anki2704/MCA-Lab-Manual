#include <iostream>
#include <string>
using namespace std;

struct Book{
	int book_id;
	string title;
	string author_name;
	float price;
	
	
};

void display(Book b) {
    cout << "\nBook Details:\n";
    cout << "Book ID: " << b.book_id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author Name: " << b.author_name << endl;
    cout << "Price: " << b.price << endl;
}

int main (){
	Book b;

    cout << "Enter Book ID: ";
    cin >> b.book_id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author_name);

    cout << "Enter Book Price: ";
    cin >> b.price;

    
    display(b);
	return 0;
}
