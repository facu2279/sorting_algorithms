/*
 * task 3-quick_sort.c
 * Made by Facundo Diaz to Holberton School
 * Date - 01/02/2021
 */
#include "sort.h"
/**
*
*/

int _strcmp(int *s1, int *s2)
{
int i, len, len2;

len = strlen(s1);
len2 = strlen(s2);
for (i = 0; i < len && i < len2; i++)
{
if (s1[i] != s2[i])
{
return (1);
}
}
return (0);
}