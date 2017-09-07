#include <stdarg.h>

/*
OVERVIEW: 	A school has unknown number of students. Write a function that takes a variable number of arguments representing student marks in english
and returns the number of students who scored > 90 marks.
E.g.: variableArguments(3, 20, 90, 98) returns 1. One value (98) is greater than 90.

INPUTS: 	First argument is number (arg_count) of student marks followed by "arg_count" number of arguments.
E.g.: If first argument to function is 5, total number of arguments to function will be 6 (1 + 5).

OUTPUT: 	Returns the number of students who scored > 90 marks.

ERROR CASES:

NOTES: 		use stdarg.h header.
*/
#include<stdarg.h>
int variableArguments(int arg_count, ...)
{
	int i;
	int count = 0 , a;

	// va_list is a type to hold information about variable arguments
	va_list ap;

	// va_start must be called before accessing variable argument list
	va_start(ap, arg_count);
	int x;
	x = 90;
	// Now arguments can be accessed one by one using va_arg macro
	// Initialize min as first argument in list   

	// traverse rest of the arguments to find out minimum
	for (i = 2; i <= arg_count+1; i++) {
		if (a = va_arg(ap, int) > x)
			count++;
	}

	//va_end should be executed before the function returns whenever
	// va_start has been previously used in that function 
	va_end(ap);

	return count;
}