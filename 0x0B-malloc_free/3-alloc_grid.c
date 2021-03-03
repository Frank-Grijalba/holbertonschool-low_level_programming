#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - create array of integers
 *@width: width of the grid
 *@height: height of the grid
 *Return: array two dimentions, NULL if fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));
		
		if (grid[x] == NULL)
		{
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
