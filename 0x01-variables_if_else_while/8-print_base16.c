#include <stdio.h>

/**

 * main - print all hexadecimal numbers starting from 0

 * Return: 0 for success

 */

int main(void)
  
{
  
  int i;
  
  char c;
  

  
  for (i = 0; i < 10; i++)
    
    {
      
      putchar((i % 10) + '0');
      
    }
  
  for (i = 10, c = 'a'; i < 16; i++, c++)
    
    {
      
      putchar(c);
      
    }
  
  putchar('\n');
  
  return (0);
  
}
