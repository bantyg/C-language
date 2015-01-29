#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 20,b = 192;
	int *a_ptr,*b_ptr,**aa_ptr,**bb_ptr;
	a_ptr = &a;
	b_ptr = &b;
	**aa_ptr = &a_ptr;
	**bb_ptr= a_ptr;
	**bb_ptr = **aa_ptr + *a_ptr;
	printf("-----------------%d\n", *a_ptr==*aa_ptr );
	return 0;
}