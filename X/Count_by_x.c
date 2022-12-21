void count_by(unsigned x, unsigned n, unsigned result[n])
{
  /*fill the array result passed as argument with your answer*/

	unsigned int i;

	for (i = 1; i <= n; i++)
	{
		result[i - 1] = x * i;
	}
}
