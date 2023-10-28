#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring within a string
 * @haystack: input string
 * @needle: substring to find in the haystack
 *
 * Return: pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*sub && *haystack && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (start);

		haystack = start + 1;
	}
	return (NULL);
}
