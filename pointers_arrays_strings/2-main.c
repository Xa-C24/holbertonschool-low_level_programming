#include "main.h"
#include <stdio.h>

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "heo";
    char *f;

    f = _strchr(s, 'hello');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}