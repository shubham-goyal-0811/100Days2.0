//Create a system to manage library catalogs which should have classes for books which have authors and catalog iteself.Implement methods for checking out and returning books searching for books by title or author

#include <iostream>
#include <string>
using namespace std;

int number = 0;

class books {
public:
    string author;
    string title;
    int id;
    bool avail;

public:
    string gettitle() {
        return title;
    }
    int getid() {
        return id;
    }
    bool available() {
        return avail;
    }
    void setAvail(bool availability) {
        avail = availability;
    }
};

class catalog {
    books books[10];

public:
    void addbook(string title, string author, int id) {
        if (number < 10) {
            books[number].title = title;
            books[number].author = author;
            books[number].id = id;
            books[number].setAvail(true);
            number++;
        } else {
            cout << "Catalog is FULL........." << endl;
            return;
        }
    }

    void findByID(int bid) {
        for (int i = 0; i < number; i++) {
            if (books[i].getid() == bid) {
                cout << books[i].gettitle() << endl;
                return;
            }
        }
        cout << "BOOK NOT FOUND....." << endl;
        return;
    }

    void findByau(string aname) {
        for (int i = 0; i < number; i++) {
            if (books[i].author == aname) {
                cout << books[i].gettitle() << endl;
            }
        }
        cout << "BOOK NOT FOUND........." << endl;
        return;
    }

    void checkOutBook(int bid) {
        for (int i = 0; i < number; i++) {
            if (books[i].getid() == bid) {
                if (books[i].available()) {
                    books[i].setAvail(false);
                    cout << "Book with ID " << bid << " has been checked out." << endl;
                    return;
                } else {
                    cout << "Book with ID " << bid << " is not available." << endl;
                    return;
                }
            }
        }
        cout << "Book with ID " << bid << " not found." << endl;
    }

    void returnBook(int bid) {
        for (int i = 0; i < number; i++) {
            if (books[i].getid() == bid) {
                if (!books[i].available()) {
                    books[i].setAvail(true);
                    cout << "Book with ID " << bid << " has been returned." << endl;
                    return;
                } else {
                    cout << "Book with ID " << bid << " has not been checked out." << endl;
                    return;
                }
            }
        }
        cout << "Book with ID " << bid << " not found." << endl;
    }
};


int main() {
    catalog c;
    c.addbook("3 States", "Chetan Bhagat", 101);
    c.addbook("Half Girlfriend", "Chetan Bhagat", 102);
    c.addbook("Night Manager", "Goyal", 103);
    c.findByID(104);
    c.findByau("Chetan Bhagat");
    c.checkOutBook(103);
    c.returnBook(103);
    c.returnBook(102);
}
