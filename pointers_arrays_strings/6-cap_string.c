#include "main.h"

/**
 * cap_string - capitalize all words a string
 *
 * @str: pointer
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}' ||
			str[i] == '\t' ||
			str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - ('a' - 'A');
			}
		}
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - ('a' - 'A');

		i++;
	}
	return (str);
}
