/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>

int decimalToOctal(int num)
{
	int octalNumber[100], i = 1, j, quotient;
	int a=0;
	if (num == 0 || num<0)
		return 0;
	quotient = num;
	while (quotient > 0)
	{
		octalNumber[i] = quotient % 8;
		quotient = quotient / 8;
		i++;
	}
	
	for (j = i-1; j >0; j--)
	{
		a = (a * 10) + octalNumber[j];
	}
	return a;
}

float decimalToOctalFraction(float num)
{
	return 0.0;
}

