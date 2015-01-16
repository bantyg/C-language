#include <stdio.h>
int main () { 
/* an array with 5 elements */ 
	float balance[5] = {11.0, 2.0, 3.4, 17.0, 50.0};
	float *p; 
	int i; 
	p = balance;

	/* output each array element's value */ 
	printf( "Array values using pointer\n"); 

	for ( i = 0; i < 5; i++ ) {
		printf("*(------------------------%f\n",*p); 
		printf("*(p + %d) : %f\n", i, *(p + i) ); 

	}
	printf( "Array values using balance as address\n"); 

	for ( i = 0; i < 5; i++ ) { 

		printf("*(balance + %d) : %f\n", i, *(balance + i) ); 
	} 
	return 0; 
}