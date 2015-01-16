#include <stdio.h>

int main(){
	int first = 5;
	int temp,second = 6;
	printf("Swapping value of the first%d\n",first );
	printf("Swapping value of the first%d\n",second );

	temp = first;
	first = second;
	second = temp;

	printf("Swapping value of the first%d\n",first );
	printf("Swapping value of the first%d\n",second );
	return 0;
}	