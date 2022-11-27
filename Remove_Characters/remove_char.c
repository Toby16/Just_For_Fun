/**
 * remove_char - function that removes the first and last characters of a string
 * @dst: destination (returned string)
 * @src: source (constant string value)
 * Return: dst
 */

char* remove_char(char* dst, const char* src)
{
	unsigned int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dst[i] = src[i + 1];
	}
	dst[i - 2] = '\0';
	
	return dst;
}
