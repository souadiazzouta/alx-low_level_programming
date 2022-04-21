#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates twoo string
 * @s1: string num 1
 * @s2: string num 2
 * @n: num of byte to take from s2
 *
 * Return: pointer to new string
 */
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, num;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	num = (n < strlen(s2) ? n : strlen(s2);

	ptr = malloc(sizeof(char) * (strlen(s1) + num) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0 ; i < n ; i++)
	{
		ptr[strlen(s1) + i] = s2[i];
	}
	ptr[i + 1] = '\0';
	return (ptr);

}