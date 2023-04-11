#include "main.h"

/**
  * alloc_grid - prints out a 2 dimensional array of integers
  * @width: the width of array
  * @height: the height of array
  *
  * Return: the pointer to the array
  */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
