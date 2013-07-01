#include "Book.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std ;

// Constructors
BookType::BookType() 
{
  title_ = "Introduction to Programming with C++" ;
	author_ = "Y. Daniel Lang" ;
	publisher_ = "Pearson Prentice Hall" ;
	isbn_ = 123456789 ;
	price_ = 120.00 ;
	yearPub_ = 2007 ;
	copies_ = 5 ;
}
BookType::BookType(string title, string author, string publisher, long isbn, double price, int yearPub, int copies)
{
	title_ = title ;
	author_ = author ;
	publisher_  = publisher ;
	isbn_ = isbn ;
	price_ = price ;
	yearPub_ = yearPub ;
	copies_ = copies ;
}

// Inspectors
string BookType::getTitle() const 
{
	return title_ ;
}
string BookType::getAuthor() const 
{
	return author_ ;
}
string BookType::getPublisher() const 
{
	return publisher_ ;
}
long BookType::getISBN() const 
{
	return isbn_ ;
}
double BookType::getPrice() const 
{
	return price_ ;
}
int BookType::getYearPub() const 
{
	return yearPub_ ;
}
int BookType::getCopies() const 
{
	return copies_ ;
}

// Mutators
void BookType::setTitle(string title) 
{
	title_ = title ;
}
void BookType::setAuthor(string author) 
{
	author_ = author ;
}
void BookType::setPublisher(string publisher) 
{
	publisher_ = publisher ;
}
void BookType::setISBN(long isbn) 
{
	isbn_ = isbn ;
}
void BookType::setPrice(double price) 
{
	price_ = price ;
}
void BookType::setYearPub(int yearPub) 
{
	yearPub_ = yearPub ;
}
void BookType::setCopies(int copies) 
{
	copies_ = copies ;
}

// Facilitator
string BookType::toString () const
{
	ostringstream os;
	cout << fixed << setprecision (2);
	os << "Title: " << title_ << endl ;
	os << "Author: " << author_ << endl ;
	os << "Publisher: " << publisher_ << endl ;
	os << "ISBN: " << isbn_ << endl ;
	os << "Price: " << price_ << endl ;
	os << "Year Published: " << yearPub_ << endl ;
	os << "Number of Copies: " << copies_ << endl ;
	os << endl ;

	return (os.str());
}

