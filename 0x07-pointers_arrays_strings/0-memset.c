#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to memory area.
 * @b: Constant byte character.
 * @n: Number of bytes to be filled.
 * Return:t.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
