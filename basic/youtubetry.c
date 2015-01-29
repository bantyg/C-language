#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 5;
	int *p;
	int **q;
	p=&a;
	q = &p;
	printf("%d\n",p );
	printf("%d\n",**q );

	return 0;
}