#include "main.h"
/**
 * _strstr - trouve le premier caratere
 * @haystack: la chaine de caratère
 * @needle: chaine à rechercher
 *
 * Return:  pointeur sur le premier caractère de la sous-chaîne dans la chaîne,
 * ou NULL si * non trouvé
 */
char *_strstr(char *haystack, char *needle)
{
	if (needle == '\0')
	return (haystack);

	while (*haystack != '\0')

	{
		while (*needle != '\0' && *haystack == *n)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		return (haystack);

		haystack++;
	}
}
