#include  "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add a + b
 * @a: first number
 * @b: second number.
 *
 * Return: result add.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - subtract a - b
 * @a: first number
 * @b: second number.
 *
 * Return: result sub.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multi a * b
 * @a: first number
 * @b: second number.
 *
 * Return: result multi.
 */

int op_mul(int a, int b)

{
	return (a * b);
}


/**
 * op_div - divide a / b
 * @a: first number
 * @b: second number.
 *
 * Return: result div.
 */

int op_div(int a, int b)

{
	return (a / b);
}


/**
 * op_mod - modulo a / b
 * @a: first number
 * @b: second number.
 *
 * Return: remainder modulo div.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
