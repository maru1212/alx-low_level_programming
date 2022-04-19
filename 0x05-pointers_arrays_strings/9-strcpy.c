#include "main.h"

/**
 * *_strcpy - copies a string from src to dest.
 * @dest: is the copy destination.
 * @src: is the sorce to be copied.
 *
 * Return: to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
