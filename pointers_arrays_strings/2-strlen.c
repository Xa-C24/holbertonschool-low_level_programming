#include "main.h"
/**
 *_strlen - function with one argumennt
 @s: charater type pointer
 *
 *Description: strlen similaire function to return length
 *Return: 'a'
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}

	return (a);
}
