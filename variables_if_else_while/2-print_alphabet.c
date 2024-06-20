#include <stdio.h>
/*
*main - Prints the alphabetic
*
*Description: main prints the alphabetic
*Return: value 0 always
*/
int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	putchar(az);
	putchar('\n');
	return (0);
}
