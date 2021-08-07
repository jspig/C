#include <iostream>

using namespace std;
//I HAD TO DO IT THIS WAY BECAUSE THE OTHER WAY WASN'T PRINTING PROPERLY/*****************************************************
int main()
{
	int iOperand1 = 12, iOperand2 = 6;
	cout << iOperand1 << " + " << iOperand2 << " = " << iOperand1 + iOperand2 << endl;
	cout << iOperand1 << " - " << iOperand2 << " = " << iOperand1 - iOperand2 << endl;
	cout << iOperand1 << " * " << iOperand2 << " = " << iOperand1 * iOperand2 << endl;
	cout << iOperand1 << " / " << iOperand2 << " = " << iOperand1 / iOperand2 << endl;

	return 0;
}