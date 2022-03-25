#include "main.h"

/**
* get_endianness - the function
*
*Return: ...
*
*/

int get_endianness(void)
{
unsigned int x = 1;
char *c;

c = (char *)&x;
if (*c)
return (1);
else
return (0);
}
