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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	_putchar('\n');
	return (dest);
}
