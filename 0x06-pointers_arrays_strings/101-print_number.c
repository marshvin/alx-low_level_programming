#include "main.h"
/**
 *print_number - prints integers
 *@n: number to be printed
 *Return: nothing
*/
void print_number(int n)
{
unsigned int y = n;
if (n < 0)
{
_putchar('-');
y = -y;
}
if ((y / 10) > 0)
{
print_number(y / 10);
_putchar('/n');
}
}
