#include "main.h"

/**
 *
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
