int prime_calc(int n, int cmp);
/**
 * is_prime_number - check n is prime
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	/**
	* The reason we start at 2 if because we want to check if
	* n has any remainders, If so we run through the else is loop
	*/
	return (prime_calc(n, 2));
}

/**
 * prime_calc - filter for prime and composite numbers
 * @n: int
 * @cmp: int
 * Return: int
 */
int prime_calc(int n, int cmp)
{

	if (cmp >= n && n > 1)/*return prime if cmp+1 = n*/
	{
		return (1);
	}
	/*if number has no remainders number is composite*/
	else if (n % cmp == 0 || n <= 1)
	{
		return (0);
	}
	/*increment cmp if condition not met*/
	return (prime_calc(n, cmp + 1));
}
