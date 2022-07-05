#ifndef DOG_H

#define DOG_H

#include <stdio.h>



/**

 * struct dog - a structure

 * @name: first member

 * @age: second member

 * @owner: third member

 */



struct dog

{
  
  char *name;
  
  float age;
  
  char *owner;
  
};



void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);



typedef struct dog dog_t;



dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);



#endif
