#include <stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x=*y;
	*y=temp;
}

int main(){
	int a=4, temp;
	int b=8;
	printf("%d\n",a );
	printf("%d\n",b );

	swap(&a,&b);
	// temp = a;
	// a=b;
	// b=temp


	printf("\n%d\n",a );
	printf("%d\n",b );	

}