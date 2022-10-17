#include "main.h"
/**
*factorial - return factorial of given number
*@n: pointer to string.
*
*Return: factorial of given number
*/
int factorial(int n)
{
        if (n < 0)
        {
                return (-1);
        }
        else if (n == 0 || n == 1)
        {
                return (1);
        }
        return (n * factorial(n - 1));
}
