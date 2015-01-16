#include <stdio.h>

int prime(int start,int end,int *result){
	int i,j=0,half;
	half = end/2;
	int arr1[half];
	for(i=start;i<end;i++){
		if(start%2 != 0){
			arr1[j]=start;
		}
	}
	printf("Array of prime:-   %d\n",arr1[0]);
}
int main(){
	int *result;
	int start = 2;
	int end = 10;
	prime(start,end,result);
}