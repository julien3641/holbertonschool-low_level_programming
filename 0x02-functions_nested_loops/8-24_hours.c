#include "main.h"

/**
 * jack_bauer - toutes les minutes d'une journée
 *
 *
 * Return:  heure de la journée
 */

void jack_bauer(void)
{
	int n1;
	int n2;
	{
		for (n1 = 0; n1 < 24; ++n1)
		{
			for (n2 = 0; n2 < 60; ++n2)
			{
				_putchar ('0' + n1 / 10);
				_putchar ('0' + n1 % 10);
				_putchar (':');
				_putchar ('0' + n2 / 10);
				_putchar ('0' + n2 % 10);
				_putchar ('\n');
			}
		}
	}
}
