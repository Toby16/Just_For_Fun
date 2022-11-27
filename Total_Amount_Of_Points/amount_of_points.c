#include <stdlib.h>

/**
 * points - Function that takes a collection of scores and returns number of points
 * @games: parameter for a collection of scores
 * Return: number of points
 */

int points(const char* const games[10]) {
	int i, x, y, points;
	points = 0;

	for (i = 0; i < 10; i++)
	{
		x = atoi(games[i]);
		y = atoi(games[i] + 2);
		
		if (x > y)
		{
			points += 3;
		}
		else if (x < y)
		{
			points += 0;
		}
		else{
			points += 1;
		}
	}
	return points;
}
