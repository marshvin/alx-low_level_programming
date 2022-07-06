#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter on each element
 * of an array
 * @array: array to processed
 * @size: size of the array
 * @action: function to be executed on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < (unsigned int) size; i++)
{
action(array[i]);
}
}
