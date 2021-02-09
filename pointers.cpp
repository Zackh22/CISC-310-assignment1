#include <stdio.h>
#include <iostream>
typedef struct Book {
	char *title;
	char *author;
	unsigned int num_pages;
} Book;

int main( int argc, char**argv)
{
	int num_books;
	std::cout << "How many books have you read in the past month? ";
	std:: cin >> num_books;
	
	return 0;
}