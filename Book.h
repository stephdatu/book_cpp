#ifndef _BOOK_
#define _BOOK_

#include <iostream>
#include <string>

using namespace std ;

class BookType
{
private:
  string title_ ;
	string author_ ;
	string publisher_ ;
	long isbn_ ;
	double price_ ;
	int yearPub_ ;
	int copies_ ;

public:
	// Constructors
	BookType() ; // default
	BookType(string title, string author, string publisher, long isbn, double price, int yearPub, int copies) ; // alternate

	// Inspectors
	string getTitle() const ;
	string getAuthor() const ;
	string getPublisher() const ;
	long getISBN() const ;
	double getPrice() const ;
	int getYearPub() const ;
	int getCopies() const ;

	// Mutators
	void setTitle(string title) ;
	void setAuthor(string author) ;
	void setPublisher(string publisher) ;
	void setISBN(long isbn) ;
	void setPrice(double price) ;
	void setYearPub(int yearPub) ;
	void setCopies(int copies) ;	

	// Facilitator
	string toString () const ;

} ;

#endif
