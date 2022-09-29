#include "main.h"

/**
 * prime_factor - check if the number has a factor
 * @prime: The number to check if is prime
 * @factor: Possible factor of the number
 *
 * Return: 1 if factor is a factor of prime
 *         0 if factor is not a factor of prime
 */
int prime_factor(int prime, int factor)
{
	if ((prime % factor) == 0)
		return (1);
	if (factor == (prime / 2))
		return (0);
	return prime_factor(prime, factor + 1);
}
/**
 * is_prime_number - find a prime number
 * @n: number to check if its prime
 *
 * Return: 1 if n is a prime number
 *         0 if n is a not prime number
 */
int is_prime_number(int n)
{
	int factor = 2;
	if (n <= 1)
		return (0);
	return (prime_factor(n, factor));
}
