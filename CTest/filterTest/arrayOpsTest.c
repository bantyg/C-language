#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayOps.h"

int checkCOndition(int ele,int index,int *array){
	return ele>3;
}

int checkConditionForChar(char ele,int index,char *array){
	return ele != 'a';
}

int checkConditionForFLoat(float ele,int index,float *array){
	return ele>2.1;
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


void test_to_filter_the_char_array(){
	char array[3] = {'a','b','a'};
	char len = 3,*result;
	assertEqual(filter_char(array,checkConditionForChar,len,&result), 1);
}


void test_to_filter_the_char_array_populates_result_array(){
	char array[4] = {'a','b','a','c'};
	char len = 4,*result;
	assertEqual(filter_char(array,checkConditionForChar,len,&result), 2);
	assertEqual(result[0], 'b');
	assertEqual(result[1], 'c');
}

