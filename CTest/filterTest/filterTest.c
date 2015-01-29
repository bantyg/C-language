#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filter.h"

int checkCOndition(int ele,int index,int *array){
	return ele>3;
}


void test_to_filter_the_array(){
	int array[5] = {1,2,3,4,5};
	int len = 5,*result;
	assertEqual(filter_int(array,checkCOndition,len,&result), 2);
}

void test_to_filter_the_array_returns_zero_if_result_array_is_empty(){
	int array[3] = {1,2,3};
	int len = 3,*result;
	assertEqual(filter_int(array,checkCOndition,len,&result), 0);
}

void test_to_filter_the_array_populates_result_array(){
	int array[5] = {1,2,3,4,5};
	int len = 5,*result;
	assertEqual(filter_int(array,checkCOndition,len,&result), 2);
	assertEqual(result[0], 4);
	assertEqual(result[1], 5);
}

int checkConditionForFLoat(float ele,int index,float *array){
	return ele>2.1;
}


void test_to_filter_the_float_array(){
	float array[3] = {1.23,2.54,3.50};
	float len = 3,*result;
	assertEqual(filter_float(array,checkConditionForFLoat,len,&result), 2);
}


void test_to_filter_the_float_array_populates_result_array(){
	float array[5] = {1.0,2.0,3.0,4.34,5.87};
	float len = 5,*result;
	assertEqual(filter_float(array,checkConditionForFLoat,len,&result), 3);
	assertEqual(result[0], 3.0);
}


int checkConditionForChar(char ele,int index,char *array){
	return ele != 'a';
} 


void test_to_filter_the_char_array(){
	char array[3] = {'a','b','a'};
	char *result;
	int len = 3;
	assertEqual(filter_char(array,checkConditionForChar,len,&result), 1);
}


void test_to_filter_the_char_array_populates_result_array(){
	char array[4] = {'a','b','a','c'};
	char *result;
	int len = 4;
	assertEqual(filter_char(array,checkConditionForChar,len,&result), 2);
	assertEqual(result[0], 'b');
	assertEqual(result[1], 'c');
}
int  startWithV(char *str,int index,char **strArray){
	return str[0]=='v';
}

void test_to_filter_the_sring_array_populates_result_array(){
	char str1[] = {'v','i','s','h','n','u','\0'};
	char str2[] = {'v','i','j','a','y','\0'};
	char str3[] = {'j','a','i','p','e','e','\0'};
	char str4[] = {'v','i','k','a','s','\0'};
	char str5[] = {'a','n','a','n','t','h','u','\0'};
	char *strArray[] = {str1,str2,str3,str4,str5};
	int len = 5;
	char **result;
	assertEqual(filter_string(strArray,startWithV,len,&result),3);
	assertEqual(strcmp(result[0],"vishnu"),0);
	assertEqual(strcmp(result[1],"vikas"),0);
}
