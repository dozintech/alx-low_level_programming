#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to be traversed.
 * @accept: set of bytes that're to be cross referenced
 *
 * Return: Returns the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, p = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (((s[i] >= 'a' && s[i] <= 'z') ||
			     (s[i] >= 'A' && s[i] <= 'Z')) &&
			    s[i] == accept[j])
				p++;
		}
	}

	return (p);
}
