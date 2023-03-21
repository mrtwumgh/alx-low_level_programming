# 0x02. C - Functions, nested loops

-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   You are allowed to use  [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   The prototypes of all your functions and the prototype of the function  `_putchar`  should be included in your header file called  `main.h`

### 1. 0-putchar.c
a program that prints  `_putchar`, followed by a new line.

### 2. 1-alphabet.c
a function that prints the alphabet, in lowercase, followed by a new line.

-   Prototype:  `void print_alphabet(void);`
-   You can only use  `_putchar`  twice in your code

### 3. 2-print_alphabet_x10.c
function that prints 10 times the alphabet, in lowercase, followed by a new line.

-   Prototype:  `void print_alphabet_x10(void);`
-   You can only use  `_putchar`  twice in your code

### 4. 3-islower.c
a function that checks for lowercase character.

-   Prototype:  `int _islower(int c);`
-   Returns  `1`  if  `c`  is lowercase
-   Returns  `0`  otherwise

### 5. 4-isalpha.c
a function that checks for alphabetic character.

-   Prototype:  `int _isalpha(int c);`
-   Returns  `1`  if  `c`  is a letter, lowercase or uppercase
-   Returns  `0`  otherwise

### 6. 5-sign.c
a function that prints the sign of a number.

-   Prototype:  `int print_sign(int n);`
-   Returns  `1`  and prints  `+`  if  `n`  is greater than zero
-   Returns  `0`  and prints  `0`  if  `n`  is zero
-   Returns  `-1`  and prints  `-`  if  `n`  is less than zero

### 7. 6-abs.c
a function that computes the absolute value of an integer.

-   Prototype:  `int _abs(int);`

### 8. 7-print_last_digit.c
a function that prints the last digit of a number.

-   Prototype:  `int print_last_digit(int);`
-   Returns the value of the last digit

### 9. 8-24_hours.c
a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

-   Prototype:  `void jack_bauer(void);`
-   You can listen to  [this soundtrack](https://intranet.alxswe.com/rltoken/aNwRcWg7MPM1J2lYuuuBjA "this soundtrack")  while coding :)

### 10. 9-times_table.c
a function that prints the 9 times table, starting with 0.

-   Prototype:  `void times_table(void);`
-   Format: see example
- ```
julien@ubuntu:~/0x02$ cat 9-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
```

### 11. 10-add.c
a function that adds two integers and returns the result.

-   Prototype:  `int add(int, int);`

### 12. 11-print_to_98.c
a function that prints all natural numbers from  `n`  to  `98`, followed by a new line.

-   Prototype:  `void print_to_98(int n);`
-   Numbers must be separated by a comma, followed by a space
-   Numbers should be printed in order
-   The first printed number should be the number passed to your function
-   The last printed number should be  `98`
-   You are allowed to use the standard library
