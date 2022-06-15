#include "main.h"
/**
 * 
 *leet - encodes a string into 1337
 *@c: string received
 *Return: string changed
*/
char *cap_string(char *)
{
int i, j;
char a[] = "oOlLeEaAtT";
char n[] = "0011334477";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (c[i] == a[j])
{
c[i] = n[j];
}
}
}
return (c);
}
