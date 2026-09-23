#include <iostream>
using namespace std;

class Book
{
public:
    string titlename;
    string writer;
    int cost;
    int pages;

    void showbook()
    {
        cout << "Book Name: " << titlename << endl;
        cout << "Writer: " << writer << endl;
        cout << "Cost: " << cost << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main()
{
    Book b1;

    b1.titlename = "harry potter";
    b1.writer = "j k rowling";
    b1.cost = 900;
    b1.pages = 400;

    b1.showbook();

    return 0;
}
