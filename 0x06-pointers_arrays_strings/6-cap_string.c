#include "main.h"

/**
 * cap_string - Capitalize the word of a string.
 * @str: The string to capitalize.
 *
 * Return: the str.
 */
char *cap_string(char *str)
{
	int indx = 0;

	while (str[indx])
	{
		while (!(str[indx] >= 'a' && str[indx] <= 'z'))
			indx++;

		if (str[indx - 1] == ' ' ||
		    str[indx - 1] == '\t' ||
		    str[indx - 1] == '\n' ||
		    str[indx - 1] == ',' ||
		    str[indx - 1] == ';' ||
		    str[indx - 1] == '!' ||
		    str[indx - 1] == '.' ||
		    str[indx - 1] == '?' ||
		    str[indx - 1] == '"' ||
		    str[indx - 1] == '(' ||
		    str[indx - 1] == ')' ||
		    str[indx - 1] == '{' ||
		    str[indx - 1] == '}' ||
		    indx == 0)
			str[indx] -= 32;

		indx++;
	}

	return (str);
}
