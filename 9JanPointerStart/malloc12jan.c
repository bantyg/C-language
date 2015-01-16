#include <stdio.h>
int main(int argc, char const *argv[])
{
	int *array;
	char *string;
	array = (int *)malloc(sizeof(int));
	string = array;
	array[0]=1;

	printf("address of array=  %d\n",array );
	printf("address of string=  %d\n",string );
	
	printf("Value of the array[0]%d\n",array[0]);

	string[0] =4;
	string[1] =5;
	string[2] =7;
	string[3] =9;

	printf("Value of the array[0]%d\n",array[0]);

	return 0;
}