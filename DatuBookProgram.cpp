// Program: DatuBookProgram.cpp
// Purpose: This program displays information on books.
// Created: Tuesday, April 13, 2010
// Modified: Sunday, June 30, 2013
// Programmer: Stephanie Datu <stephdatu@gmail.com>

#include "Book.h"
#include <iostream>
#include <string>

using namespace std ;

int main()
{
  cout << "Book Information Program" << endl ;
	cout << "-------------------------------------------------------" << endl << endl ;

	// Using the Default Constructor
	cout << "***** Example Using Default Constructor *****" << endl << endl ;
	BookType example ;
	cout << "The default book information is: " << endl << endl 
		 << example.toString();
	
	cout << endl ;
	// Using the Alternate Constructor
	cout << "***** Example Inputting Book Information *****" << endl << endl ;
	cout << "Search for Book Using ISBN Number" << endl ;
	string userTitle = "Book Title Example" ;
	string userAuthor = "John Smith" ;
	string userPublisher = "Publishers, Inc" ;
	long userISBN ;
	double userPrice = 24.99 ;
	int userYear = 2005 ;
	int userCopies = 22 ;

	cout << "Enter 9-digit ISBN: " ; cin >> userISBN ;
	cout << endl ;

	BookType user(userTitle, userAuthor, userPublisher, userISBN, userPrice, userYear, userCopies) ;
	cout << "The book information with ISBN " << userISBN << " is: " << endl << endl 
		 << user.toString();

	cout << endl ;
	// Using Inspectors
	cout << "***** Example Using Inspectors *****" << endl << endl ;
	cout << "The title of the default book is: " 
		 << example.getTitle() << endl ;
	cout << "The price of the default book is: "
		 << example.getPrice() << endl ;
	cout << "The author of the user-searched book is: "
		 << user.getAuthor() << endl ;

	cout << endl ;
	// Using Manipulators
	cout << "***** Example Using Manipulators *****" << endl << endl ;
	cout << "Change the price and number of copies of the default book" << endl ;
	double newPrice ;
	int newCopies ;
	cout << "Enter a new price for the default book: " ; cin >> newPrice ;
	cout << "Enter the updated number of copies: " ; cin >> newCopies ;
	example.setPrice(newPrice) ;
	example.setCopies(newCopies) ;
	cout << "The updated default book information is: " << endl << endl 
		 << example.toString();

	cout << endl ;
	return 0 ;
}
