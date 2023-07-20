#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 *
 * Description: This function prints the sign of the integer @n.
 * If @n is greater than zero, it prints '+'. If @n is zero, it prints '0'.
 * If @n is less than zero, it prints '-'.
 *
 * Return: 1 and prints '+' if @n is greater than zero,
 *         0 and prints '0' if @n is zero,
 *         -1 and prints '-' if @n is less than zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        _putchar(48); /* ASCII value for '0' */
        return (0);
    }
    else if (n < 0)
    {
        _putchar('-');
    }
    return (-1);
}
