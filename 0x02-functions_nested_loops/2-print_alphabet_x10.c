#include "main.h"

/**
 *print alphabet - prints the lowercase alphabets
 *Return: valve 0
 */

void print_alphabet(void)
{
	int i;
	
	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
