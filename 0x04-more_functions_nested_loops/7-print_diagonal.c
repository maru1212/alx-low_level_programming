#include "main.h"

/**
 * print_diagonal - prints diagonals.
 * @n; is how many time the diagonal will be printed.
 *
 *
 * Retrun: void.
 */

void print_diagonal(int n)
{
  int r, c;

  if (n > 0)
    {
      for (r = 0; r <= n; r++)
	{
	  for (c = 0; c <= n; c++)
	    {
	      if (c == r)
		  _putchar('\\');
	      else
		_putchar(' ');
	    }
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
}
