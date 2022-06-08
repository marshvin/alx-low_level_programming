#include "main.h"
void print_alphabet_x10(void);
/**
* print_alphabet_x10 - prints the alphabet in lowercase ten times
*/
void print_alphabet_x10(void)
{
char b;
int i = 0;
while (i < 10)    
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
i++;
} 
}
