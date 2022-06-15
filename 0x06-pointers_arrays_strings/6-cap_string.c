#include "main.h"
/**
 * 
 *leet - encodes a string into 1337
 *@c: string received
 *Return: string changed
*/
char *cap_string(char *)
{
  
  int i;
  

  
  if (c[0] >= 'a' && c[0] <= 'z')
    
    {
      
      c[0] = c[0] - 32;
      
    }
  
  for (i = 1; c[i] != '\0'; i++)
    
    {
      
      if ((c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n'
	   
	   || c[i - 1] == ','
	   
	   || c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!'
	   
	   || c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '('
	   
	   || c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}')
	  
	  && (c[i] > 'a' && c[i] < 'z'))
	
	{
	  
	  c[i] = c[i] - 32;
	  
	}
      
    }
  
  return (c);
  
}

© 2022 GitHub, Inc.{
  
  int i;
  

  
  if (c[0] >= 'a' && c[0] <= 'z')
    
    {
      
      c[0] = c[0] - 32;
      
    }
  
  for (i = 1; c[i] != '\0'; i++)
    
    {
      
      if ((c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n'
	   
	   || c[i - 1] == ','
	   
	   || c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!'
	   
	   || c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '('
	   
	   || c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}')
	  
	  && (c[i] > 'a' && c[i] < 'z'))
	
	{
	  
	  c[i] = c[i] - 32;
	  
	}
}
  return (c);
}
