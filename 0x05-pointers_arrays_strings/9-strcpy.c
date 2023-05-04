#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Replicate the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest
 * Alhamdulilah
 */

char *_strcpy(char *dest, char *src)
{
	int h = -1;

	do {
		h++;
		dest[h] = src[h];
	} while (src[h] != '\0');

	return (dest);
}

