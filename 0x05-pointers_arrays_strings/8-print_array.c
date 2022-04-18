#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int i, inte;

for (i = 0; i < n; i++)
{

inte = *(a + i);

printf("%d", inte);

if (i != n - 1)
printf(", ");
}

printf("\n");
}
