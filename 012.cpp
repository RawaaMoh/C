#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
#include <string.h>

typedef struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}book;

void printBook(book book);
int main(int argc, char** argv) {
	book b;
	strcpy(b.author, "Jane Austen");
	strcpy(b.subject, "Novel");
	strcpy(b.title, "Pride and Prejudice");
	b.book_id = 34;
	printBook(b);

	return 0;
}



void printBook(book book)
{
	printf("Title   : %s\n", book.title);
	printf("Subject : %s\n", book.subject);
	printf("Author  : %s\n", book.author);
	printf("Book id : %d \n ", book.book_id);
}
