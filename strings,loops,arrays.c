#include <stdio.h>

int main()
{

	int n = 20;
	int o = 100;
	int* iPtr = NULL;
	printf("\niPtr points to: %p\n", iPtr);

	iPtr = &o;
	printf("\niPtr now points to: %p\n", iPtr);

	// change the value of 'n' to the value of 'o';

	n = *iPtr;
	printf("\nThe value of 'n' is now: %d\n", n);

	//change the value of 'o' to the value of 1000;

	*iPtr = 1000;
	printf("\nThe value of 'o' is now: %d\n", o);

	return 0;

}
