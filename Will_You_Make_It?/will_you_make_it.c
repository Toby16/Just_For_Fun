#include <stdbool.h>

/**
 * zero_fuel - function that tells you if it is possible to get to the pump or not
 * @distance_to_pump - distance to nearest pump (measured in Miles)
 * @mpg: miles per gallon
 * @fuel_left: fuel left (measured in gallons)
 * Return: true (if True) or false (if False)
 */

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
	if ((fuel_left * mpg) >= distance_to_pump)
	{
		return true;
	}
	else
	{
		return false;
	}
}
