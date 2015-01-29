#include "binary_print.h"
#include <stdio.h>


int main(int argc, char const *argv[]) {
	int a=65;
	int *b=&a;
	char *c="ABCDEFGH";
	char *bin_string;
	// bin_string = get_byte_as_string(c[3]);
	print_bytes_between(c,c+7);
	// printf("%s hello\n", bin_string);
	return 0;
}