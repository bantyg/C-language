#include "map.h"
#include <stdio.h>
#include <stdlib.h>

int* int_map(int *array,int len,int (*operation)(int,int,int *)){
	int i,*result;
	result = (int *)malloc(sizeof(int)*len);
	for(i=0;i<len;i++){
		result[i] = (*operation)(array[i],i,array);
	}
	return result;
}
float* float_map(float *array,int len,float (*operation)(float,int,float *)){
	int i;
	float *result;
	result = (float *)malloc(sizeof(float)*len);
	for(i=0;i<len;i++){
		result[i] = (*operation)(array[i],i,array);
	}
	return result;
};

char* char_map(char *array, int len , char (*operation)(char, int, char *)){
	int i;
	char *result;
	result = (char *)malloc(sizeof(char)*len);
	for(i=0;i<len;i++){
		result[i] = (*operation)(array[i],i,array);
	}
	return result;
}

char** string_map(char **strArray,int len,char* (*operation)(char *, int, char **)){
	int i;
	char **result;
	result = malloc(sizeof(char *)*len);
	for(i=0;i<len;i++){
		result[i] = (*operation)(strArray[i],i,strArray);
	}
	return result;

}