#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - double pointer
 * @width: width
 * @height: height
 * Return: 0
 */
int **alloc_grid(int width, int height)

{
	int i, j, k;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar =  malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == 0)
		{
			while (i >= 0)
			{
				free(ar[i--]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			ar[j][k] = 0;
		}
	}
	return (ar);
}
