#include <iostream>

using namespace std;


//Class = blueprint for new data type 

class Book {

    public: 
        string title;
        string author;
        int pages;
        //constructor - special function that gets called whenever we create a book object
        Book( string aTitle ,string aAuthor ,int aPages){

            title = aTitle;
            author = aAuthor;
            pages = aPages;

        }


};

int main()
{

/*
    string name = "Dev";
    double pi = 3.14;
    char favoriteLetter = 'O';

    */

   //Object - physical book in our program

   Book book1("Jungle Book" ,"Idek" ,500);
//    book1.title = "Jungle Book";
//    book1.author = "Idek";
//    book1.pages = 500;

//    cout << book1.title << endl;

   Book book2("Harry Potter" ,"JK Rowling" ,700);
//    book2.title = "Harry Potter";
//    book2.author = "JK Rowling";
//    book2.pages = 700;

   cout << book2.title<< endl;

    
    
    
    return 0;
}