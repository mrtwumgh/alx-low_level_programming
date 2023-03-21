#include <stdio.h>
#include <string.h>

/**
  * main - prints _putchar to screen
  *
  * Return: Always 0(Success)
  *
  */

int main(void)
{
	char ch[] = "_putchar";
	int x;
	int str_len;

	str_len = strlen(ch);

	for (x = 0; x < str_len; x++)
	{
		putchar(ch[x]);
	}
	putchar('\n');

	return (0);
}
