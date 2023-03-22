#include <stdio.h>

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (n);
	}
	else
	{
		printf("%d is negative\n", n);
		return (n);
	}
}
