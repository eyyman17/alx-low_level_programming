#include "3-calc.h"

/**
 * op_add - addition
 *
 * @a: num1
 * @b: num2
 *
 * Return: the sum of a and b
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 *
 * @a: num1
 * @b: num2
 *
 * Return: the difference of a and b
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: num1
 * @b: num2
 *
 * Return: the product of a and b
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: num1
 * @b: num2
 *
 * Return: the result of division of a by b
 **/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 *
 * @a: num1
 * @b: num2
 *
 * Return: the remainder of the division of a by b
 **/

int op_mod(int a, int b)
{
	return (a % b);
}
