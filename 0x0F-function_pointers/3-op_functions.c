#include "3-calc.h"

/**
*op_add - print the name of the executable
*@a:first number
*@b: second number
*Return: the sum
*On error, -1 is returned, and errno is set appropriately.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - print the name of the executable
*@a:first number
*@b: second number
*Return: the difference
*On error, -1 is returned, and errno is set appropriately.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - print the name of the executable
*@a:first number
*@b: second number
*Return: the product
*On error, -1 is returned, and errno is set appropriately.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - print the name of the executable
*@a:first number
*@b: second number
*Return: the division
*On error, -1 is returned, and errno is set appropriately.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - print the name of the executable
*@a:first number
*@b: second number
*Return: the module or the remainder of the division
*On error, -1 is returned, and errno is set appropriately.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
