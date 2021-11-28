#include <stdio.h>
#include <string.h>

struct monster {
	char type [20];
	char ability [50];
	char weakness[50];
};
int main()
{


	typedef struct monster {
		char type  [25];
		char ability [50];
		char weakness [10];
	} p;
	
	p aMonster = { 0,0 };
	p* ptrMonster;
	ptrMonster = &aMonster;
	
	
	strcpy_s(ptrMonster->type, "Shadow Hero");
	strcpy_s(ptrMonster->ability, "Takes the Form of its opponent");
	strcpy_s(ptrMonster->weakness, "Light");

	printf("\nMonster: %s\n", ptrMonster->type);
	printf("\nMonster: %s\n", ptrMonster->ability);
	printf("\nMonster: %s\n", ptrMonster->weakness);

	return 0;


}