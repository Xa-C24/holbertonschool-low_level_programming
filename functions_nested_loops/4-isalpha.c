#include "main.h"
/**
 * isalpha: check alphabetic character
 * 
 * Description c: character checked
 * Return: 1 for character, Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
