#include <stdbool.h>

/**
 * bool_to_word - Method that returbs "Yes" or "No"
 * @value: parameter that takes a boolean value
 * Return: "Yes" for true and "No" for false
 */

const char *bool_to_word (bool value)
{
/*you can return a static/global string or a string literal*/
	if (value == true)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}
