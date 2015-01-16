#include "forEach.h"
#include <stdio.h>

int forEach(int *array, void (*operation)(int,int,int *), int length){
	int i=0;
	if(length==0)
		return 0;
	for(i=0;i<length;i++){
		operation(array[i],i,array);
	}
	return 1;
}

int forEach_float(float *array, void (*operation)(float,int,float *), int length){
	int i=0;
	if(length==0)
		return 0;
	for(i=0;i<length;i++){
		operation(array[i],i,array);
	}
	return 1;
}

int forEach_char(char *array, void (*operation)(char,int,char *), int length){
	int i=0;
	if(length==0)
		return 0;
	for(i=0;i<length;i++){
		operation(array[i],i,array);
	}
	return 1;
}

