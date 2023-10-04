#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *stp ;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strp = (char *)malloc(sizeof(char) * (i + 1));

	if (strp == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strp[j] = str[j];

	return (strp);
}
