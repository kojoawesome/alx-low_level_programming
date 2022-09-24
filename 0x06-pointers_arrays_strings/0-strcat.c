#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int indo = 0, dest_len = 0;

	while (dest[indo++])
		dest_len++;

	for (indo = 0; src[indo]; indo++)
		dest[dest_len++] = src[indo];

	return (dest);
}
