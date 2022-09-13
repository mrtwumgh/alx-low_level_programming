#include "main.h"
i
/**
*print_times_table - prints the the 100 times table
*@n: number to be processed
*/
void print_times_table(int n)
{
	int m, o, p;

	if (n >= 0 && n <= 15){
		for (m = 0; m <= n; m++){
			for (o = 0; o <= n; o++){
				p = o + m;
				if (o == 0){
					_putchar(p + '0');
				}else if (p < 10 && != 0){
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}else if (p >= 10 && p < 100){
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}else if (p >= 100){
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
