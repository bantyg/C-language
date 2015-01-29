#include <stdio.h>
#include "expr_assert.h"
#include "map.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int add2(int ele,int index,int *array){
	return ele+2;
}
void test_to_map_on_integer_array(){
	 
	int array[4] = {1,2,3,4};
	int *result_array,len=4;
	int (*fPtr)(int,int,int *);
	fPtr = &add2;
	result_array = int_map(array,len,fPtr);
	assertEqual(result_array[0],3);
	assertEqual(result_array[1],4);
	assertEqual(result_array[2],5);
	assertEqual(result_array[3],6);
	free(result_array);
}


float addForFloat(float ele,int index,float *array){
	return ele+1.2;
}

void test_to_map_on_float_array(){
	float array[4] = {1.4,2.3,3.6,4.2};
	int len=4;
	float *float_result_array;
	float (*fPtr)(float,int,float *);
	fPtr = &addForFloat;
	float_result_array = float_map(array,len,fPtr);
	assertEqual(float_result_array[0],(float)2.6);
	assertEqual(float_result_array[1],(float)3.5);
	assertEqual(float_result_array[2],(float)4.8);
	assertEqual(float_result_array[3],(float)5.4);
	free(float_result_array);
}

char changeToUpper(char ch,int index,char *array){
	return toupper(ch);
}

void test_to_map_char_array(){
	char name[5] = {'p','o','o','j','a'};
	int len = 5;
	char *char_result_array;
	char (*fPtr)(char,int,char *);
	fPtr = & changeToUpper;
	char_result_array = char_map(name,len,fPtr);
	assertEqual(char_result_array[0],'P');
	assertEqual(char_result_array[1],'O');
	assertEqual(char_result_array[2],'O');
	assertEqual(char_result_array[3],'J');
	assertEqual(char_result_array[4],'A');
	free(char_result_array);
}

char* toUpperString(char *str,int index,char **strArray){
	int i;
	int length = strlen(str);
	char *result;
	str[length] = '\0';
	result = malloc(sizeof(char)*strlen(str)+1);
	for(i=0;i<strlen(str)+1;i++){
		result[i] = toupper(str[i]);
	}
	return result;
} 


void test_to_map_string_array(){
	char str1[] = {'p','o','o','j','a','\0'};
	char str2[] = {'b','a','b','a','j','i','\0'};
	char str3[] = {'b','a','k','r','i','\0'};
	char **str_result_array;
	int len = 3;
	char *strArray[] = {str1,str2,str3};
	str_result_array = string_map(strArray,len,toUpperString);
	assertEqual(strcmp(str_result_array[0],"POOJA"),0);
	assertEqual(strcmp(str_result_array[1],"BABAJI"),0);
	assertEqual(strcmp(str_result_array[2],"BAKRI"),0);
}

void test_to_map_string_array_string(){
	char str1[] = "pooja";
	char str2[] = "babaji";
	char str3[] = "bakri";
	char **str_result_array;
	int len = 3;
	char *strArray[] = {str1,str2,str3};
	str_result_array = string_map(strArray,len,toUpperString);
	assertEqual(strcmp(str_result_array[0],"POOJA"),0);
	assertEqual(strcmp(str_result_array[1],"BABAJI"),0);
	assertEqual(strcmp(str_result_array[2],"BAKRI"),0);
}












