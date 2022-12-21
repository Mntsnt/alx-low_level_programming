#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int index;
	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
