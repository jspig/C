#include <stdio.h>
#include <string.h>

typedef struct phoneBook
{
	int number;
	char name[15];
}p;

void processBook(p*);

int main()
{
	p Book1[2] = { 0,0};
	int x;
	processBook(Book1);
	for (x = 0; x<5;  x++)
	{
		printf("\nNumber: %d\n", Book1[x].number); printf("Name: %s\n", Book1[x].name);
	}
	return 0;
}

void processBook(p* Book)
{
		Book[0].number = 8884447890;
		strcpy_s(Book[0].name, "Benimaru");
		Book[1].number = 8884457891;
		strcpy_s(Book[1].name, "Shinra");
		Book[2].number = 8884467892;
		strcpy_s(Book[2].name, "Knight King");
		Book[3].number = 8884477893;
		strcpy_s(Book[3].name, "Gurren");
		Book[4].number = 8884487894;
		strcpy_s(Book[4].name, "Lagann");
}