#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: points to destination memory.
 * @src: Points to source memory.
 * @n: number of bytes to be copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];

	}
	return (dest);
}
