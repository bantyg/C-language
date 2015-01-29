#include <stdio.h>
#include <stdlib.h>
#include "filter.h"

int filter_int(int *array, int (*operation)(int,int,int *),int len, int **result){
	int i,j=0;
	for(i=0;i<len;i++){
		if(operation(array[i],i,array)){
			j++;
		}
	}
	*result=(int *)malloc(sizeof(int)*j);
	j=0;
	for(i=0;i<len;i++){
		if(operation(array[i],i,array)){
			(*result)[j]=array[i];
			j++;
		}
	}
	return j;
}

int filter_float(float *array,int (*operation)(float,int,float *),int len,float **result){
	int i,j=0;
	for(i=0;i<len;i++){
		if(operation(array[i],i,array)){
			j++;
		}
	}
	*result = (float *)malloc(sizeof(float)*j);
	j=0;
	for(i=0;i<len;i++){
		if(operation(array[i],i,array)){
			(*result)[j]=array[i];
			j++;
		}
	}
	return j;
}

int filter_char(char *array,int (*operation)(char,int,char *),int len,char **result){
	int i,j=0;
	for(i=0;i<len;i++){
		if(operation(array[i],i,array)){
			j++;
		}
	}
	*result = (char *)malloc(sizeof(char)*j);
	j=0;
	for(i=0;i<len;i++){
		if(operation(array[i],i,array)){
			(*result)[j]=array[i];
			j++;
		}
	}
	return j;
}	

int filter_string(char **strArray,int (*operation)(char *,int,char **),int len,char ***result){
	int i,j=0;
	for(i=0;i<len;i++){
		if(operation(strArray[i],i,strArray)){
			j++;
		}
	}
	**result = (char *)malloc(sizeof(char)*j);
	j=0;
	for(i=0;i<len;i++){
		if(operation(strArray[i],i,strArray)){
			(*result)[j]=strArray[i];
			j++;
		}
	}
	return j;
}
