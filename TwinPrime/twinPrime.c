/* DESCRIPTION:
A twin prime is a prime number that differs from another prime number by 2.
Write a function named is_twin_prime which takes an int parameter and returns true if it is a
twin prime, else false.

Examples
given 5, which is prime
5 + 2 = 7, which is prime 
5 - 2 = 3, which is prime
hence, 5 has two prime twins and it is a Twin Prime.
given 7, which is prime
7 - 2 = 5, which is prime
7 + 2 = 9. which is not prime
hence, 7 has one prime twin, and it is a Twin Prime.
given 9, which is not prime 
hence, 9 is not a Twin Prime
given 953, which is prime
953 - 2 = 951, which is not prime
953 + 2 = 955, which is not prime 
hence, 953 is not a Twin Prime */

#include <stdbool.h>

int isPrime (int n)
{
  int i;
  
  i = 2;
  if (n == 2)
    return (1);
  while (i < n / 2)
  {
    if (n % i == 0)
      return (0);
    i++;
  }
  return (1);
}

bool is_twinprime(int n) 
{
  if (isPrime(n) == 0 || n <= 0)
    return (false);
  if (isPrime(n + 2) || isPrime(n - 2))
    return (true);
  return (false);
}