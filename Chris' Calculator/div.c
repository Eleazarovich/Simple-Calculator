
/**
 * divide - returns the quotient of two integers
 * @n1: the first integer (dividnd)
 * @n2: the seind integer (divisor)
 * Description: calculates and returns the integer result of dividing
 * 		@n1 by @n2. If @n2 is 0, the function returns 0.
 *
 * Return: int quotient of @n1 and @n2
 */

int divide(int n1, int n2)
{
	if (n2 == 0)
		return (n2);

	return (n1 / n2);
}
