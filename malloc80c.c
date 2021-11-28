#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* movie;
	movie = (char*)malloc(80 * sizeof(char));
	if (movie != NULL) {
		printf("\nHancock.\n");
		scanf_s("%d", &movie);
		return 1;
	}
	else {
		printf("\nMemory allocated.\n");
		scanf_s("%d", &movie);

		return 0;
	}
	
}