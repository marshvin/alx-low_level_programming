#include <stdio.h>
/**
* main - prints letters of the alphabet in lowercase & uppercase
* Return: 0 for success exit status
*/
int main(void)
{
char cl = 'a';
char cu = 'A';
while (cl <= 'z')
{
putchar(cl);
cl++;
}
while (cu <= 'Z')
{
putchar(cu);
cu++;
}
putchar('\n');
return (0);
}
