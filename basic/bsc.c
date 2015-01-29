#include <stdio.h>

int multiply(int *a,int *b){
	printf("a in fun-----%p\n",a );
	printf("b in fun-----%p\n",b );
	return *a * *b;
}

int main(int argc, char const *argv[])
{
	int c;
	int a =2;
	int b = 3;

	c = a+b;
	printf("%d\n",c );
	printf("-----%p\n",&c );
	printf("------%p\n",&a );
	printf("------%p\n",&b );

	printf("addr of multiply %p\n",&multiply );

	multiply(&a, &b);
	printf("addr of multiply %p\n",&multiply );

	return c;
}