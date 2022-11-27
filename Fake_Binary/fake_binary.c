/**
 * fakeBin - Function to mimic a deimal-to-binary converter
 * @digits: string of decimal values
 * @binary: string of binary values
 * Return: void
 */

void fakeBin(const char *digits, char *binary)
{
	int i;
	
	for (i = 0; digits[i] != '\0'; i++)
	{
		if (digits[i] < '5')
		{
			binary[i] = '0';
		}
		else
		{
			binary[i] = '1';
		}
	}
	binary[i] = '\0';
}
