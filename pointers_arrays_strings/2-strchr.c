#include "main.h"
/**
 * _strchr - recherche caratères dans une string
 * @s: pointeur sur la string
 * @c: caractere a rechercher dans la string
 *
 * Return: Return NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
		;

	return (*s == c ? s : NULL);
}
