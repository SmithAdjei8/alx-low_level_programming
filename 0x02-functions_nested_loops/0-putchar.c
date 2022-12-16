#include <unistd.h>
#include "main.h"
/**
 *_putchar - writes character c
 *
 *Return: Always 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
