#include "reduce.h"
#include <stdio.h>
#include <stdlib.h>


int int_reduce(int *array,int len,int (*operation)(int,int),int init_value){
	int i,result=init_value;
	for (i = 0; i < len; i++){
		result = (*operation)(result,array[i]);
	}
	return result;
};

float float_reduce(float *array,int len,float (*operation)(float,float),float init_value){
	int i;
	float result = init_value;
	for(i=0;i<len;i++){
		result = (*operation)(result,array[i]);
	}
	return result;
}

char char_reduce(char *array,int len,char (*operation)(char,char)){
	int i;
	char result='~';
	for (i = 0; i < len - 1; i++){
		result = (*operation)(result,array[i]);
	}
	return result;
}


char* string_reduce(char **strArray,int len ,char* (*operation)(char *str1,char *str2)){
	int i;
	char *result;
	result = malloc(sizeof(char)*50);
	strcpy(result," ");
	for (i = 0; i < len; ++i)
	{
		result = (*operation)(result,strArray[i]);

	}
		printf("result%s\n",result );
	return result;
}
