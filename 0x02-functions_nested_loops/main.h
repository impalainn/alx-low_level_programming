#ifndef MAIN_H_
#define MAIN_H_
#include<stdio.h>
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
}


#endif
