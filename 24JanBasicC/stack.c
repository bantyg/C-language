#include <stdio.h>
#include "binary_print.h"

int main()
{
	int a = 4294967295;
	int b = 30;
	char c = 'a';
	float d = 1.0;
	char *p = &a;
	int *q = &b;
	printf("addr of a  %p\n", &a);
	printf("addr of b  %p\n", &b);
	printf("addr of c  %p\n",&c);
	printf("addr of d  %p\n",&d);

	printf("addr of main %p\n", &main);
	print_bytes_between(&d,&c);
	return 0;
}