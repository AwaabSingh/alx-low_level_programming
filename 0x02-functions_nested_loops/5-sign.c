#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 *         and prints the corresponding sign character (+, 0, -) to stdout
 */
int print_sign(int n)
{
    int sign = 0;

    if (n > 0)
    {
        _putchar('+');
        sign = 1;
    }
    else if (n < 0)
    {
        _putchar('-');
        sign = -1;
    }
    else
    {
        _putchar('0');
    }

    return sign;
}
