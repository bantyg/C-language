#include "reduce.h"
#include <stdio.h>
#include "expr_assert.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int addition(int num1,int num2){
	return num1+num2;
} 


void test_to_reduce_intiger_array(){
	int array[4] = {1,2,3,4};
	int len = 4;
	int init_value = 0;
	int (*fPtr)(int ,int);
	fPtr = &addition;
	assertEqual(int_reduce(array,len,fPtr,init_value),10);
}

float greaterThan(float num1,float num2){
	if(num1>num2)
		return num1;
	return num2;
} 


void test_to_reduce_float_array(){
	float array[4] = {3.2,4.5,1.5,2.1};
	int len = 4;
	float init_value = 0.5;
	float (*fPtr)(float ,float);
	fPtr = &greaterThan;
	assertEqual(float_reduce(array,len,fPtr,init_value), (float)4.5);
}

char smallChar(char char1,char char2){
	if(char1<char2)
		return char1;
	return char2;
}


void test_to_reduce_char_array(){
	char array[6] = {'p','o','o','j','a','g'};
	int len = 6;
	char (*fPtr)(char,char);
	fPtr = &smallChar;
	assertEqual(char_reduce(array,len,fPtr),'a');
	
}

void test_to_reduce_char_array1(){
	char array[6] = {'a','o','o','j','z','g'};
	int len = 6;
	char (*fPtr)(char,char);
	fPtr = &smallChar;
	assertEqual(char_reduce(array,len,fPtr),'a');
}

char* concatString(char *str1,char *str2){
	printf("________________%s___________%s\n",str1 ,str2);
	printf(">>>> str1	%s\n",  str1);

	strcat(str1,str2);
	return str1;
}

void test_to_reduce_string_array1(){
	char str1[] = {'p','o','o','j','a',' ','\0'};
	char str2[] = {'a','n','a','n','d','r','a','o',' ','\0'};
	char str3[] = {'g','u','r','a','v','\0'};
	char *strArray[] = {str1,str2,str3};
	int len = 3;
	char*(*fPtr)(char *,char *);
	char *result;
	fPtr = &concatString;
	result = string_reduce(strArray,len,concatString); 
	assertEqual(strcmp(result," pooja anandrao gurav"),0);

}