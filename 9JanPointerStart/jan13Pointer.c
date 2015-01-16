#include <stdio.h>

int func(int **array){
	printf("address of an array in function  %p\n",&array );
	// *array = malloc(sizeof(int)*2);
	printf("-------------------------------%d\n",array);
	printf("-------------------------------%d\n",*array);
	(*array)[0] = 1;
	(*array)[1] = 2;
	printf("address of an array in function  %p\n",&array );
	printf("value of an array in function   %d\n",*array[0]);
}
int main(){
	int *array;
	array=5;
	printf("address of an array in main   %p\n",&array);
	func(&array);
	printf("value of an array in main   %d\n",array[0]);
	printf("value of an array in main   %d\n",array[1]);
	return 0;
}