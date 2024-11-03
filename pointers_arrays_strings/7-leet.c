#include "main.h"

/**
 * lett - encodes a string into 1337
 *
 * @str : the pointer
 *
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = num[j];
			}
		}
		i++;
	}
	return (str);
}
