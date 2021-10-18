#include "main.h"

/**
 * _memcpy - Copie bytes from src to dest.
 * @dest: Pointer to destination buffer.
 * @src: Pointer to source buffer.
 * @n: Number of bytes to copy.
 * Return: Pointer to dest buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int x = 0;

	while (n > 0)
	{
		dest[y] = src[x];
		y++;
		x++;
		n--;
	}
	return (dest);
}
