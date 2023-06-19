# 0x18. C - Dynamic libraries

-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

### libdynamic.so, main.h

Create the dynamic library libdynamic.so containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

```

If you haven’t coded all of the above functions create empty ones, with the right prototype.  
Don’t forget to push your  `main.h`  file in your repository, containing at least all the prototypes of the above functions.


### 1-create_dynamic_lib.sh
Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.


### 100-operations.so
```
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
```

### 101-make_me_win.sh
![](http://4.bp.blogspot.com/-9rqm8Pg1apY/UZHoC79xXtI/AAAAAAAACOs/0Fp4A4ipUqM/s320/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg)

I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

-   Our mole got us a copy of the program, you can download it  [here](https://github.com/alx-tools/0x18.c "here"). Our mole also gave us a piece of documentation:

```
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus

```

-   You can’t modify the program  `gm`  itself as Master Sysadmin Sylvain (MSS) always checks its  [MD5](https://intranet.alxswe.com/rltoken/uFp7pQzfyzDA7z2cVOKIaQ "MD5")  before running it
-   The system is an  `Linux Ubuntu 16.04`
-   The server has internet access
-   Our mole will be only able to run two commands from a shell script, without being detected by MSS
-   Your shell script should be maximum 3 lines long. You are not allowed to use  `;`,  `&&`,  `||`,  `|`, ` (it would be detected by MSS), and have a maximum of two commands
-   Our mole has only the authorization to upload one file on the server. It will be your shell script
-   Our mole will run your shell script this way:  `mss@gm_server$ . ./101-make_me_win.sh`
-   Our mole will run your shell script from the same directory containing the program  `gm`, exactly 98 seconds before MSS runs  `gm`  with my numbers:  `./gm 9 8 10 24 75 9`
-   MSS will use the same terminal and session than our mole
-   Before running the  `gm`  program, MSS always check the content of the directory
-   MSS always exit after running the program  `gm`
-   TL;DR; This is what is going to happen

```
mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
