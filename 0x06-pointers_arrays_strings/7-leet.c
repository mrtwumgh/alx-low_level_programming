#include "main.h"

/**
  * leet - encodes a string into 1337
  * @s: string to be encoded
  *
  * Return: a pointer to the string
  */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char s_letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; s_letters[j] != '\0'; j++)
		{
			if (s[i] == s_letters[j])
			{
				s[i] = nums[j];
			}
		}
		i++;
	}

	return (s);
}
