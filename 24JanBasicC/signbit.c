#include <stdio.h>
#include "binary_print.h"

int main(int argc, char const *argv[])
{
	int i = -5;
	int j = 5;
	char *p = &i;
	char *q = &j;
	char c='a';
	printf("addr of i  %p\n",&i);		
	printf("addr of j  %p\n",&j);		

	print_bytes_between(&j,&i+1);
	return 0;
}