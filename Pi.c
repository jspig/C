#include <stdio.h>
template<typename T1, typename T2>
constexpr auto area(T1 PI, T2 radius) { return (PI * radius *radius); }

int main()
{
	int radius = 7;
	double PI = 3.14159;


	printf("\nEnter radius: 7");
	printf("\nEnter PI: 3.14159");
	printf("\nThe area is %f\n", area(PI, radius));
	scanf_s("%d", &radius);
	scanf_s("%f", PI);


	
	return 0;
}