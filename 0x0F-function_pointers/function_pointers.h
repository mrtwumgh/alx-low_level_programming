#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

#include <stdio.h>

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H_ */
