#include <stdio.h>
#define TotalRevenue(price,quantity) (price * quantity)


int main()

{
	double price = 100.00;
	int quantity = 131928647;

	printf("\nEnter Price: 100.00");
	printf("\nEnter Quantity: 131928647");
	printf("\nThe Total Revenue = %f\n", TotalRevenue(price,quantity));
	scanf_s("%f", &price);
	scanf_s("%d", &quantity);
	return 0;
}