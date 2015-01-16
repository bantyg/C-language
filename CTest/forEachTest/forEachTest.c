#include "forEach.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void square(int ele,int index,int *array){
	array[index]=ele*ele;
}

void cube(float ele,int index,float *array){
	array[index]=ele*ele*ele;
}

void replace(char ele,int index, char *array){
	array[index]='0';
}

void upper(char *str,int index,char **array){
	int i;
	int l = strlen(str);
	for (i = 0; i < l; i++)
	{
		str[i] = toupper(str[i]);
	}
}


void test_foreach_retuns_zero_if_array_length_is_zero(){
	int *array,length=0;
	void (*operation)(int,int,int*)=&square;
	assertEqual(forEach(array,operation,length), 0);
}

void test_foreach_retuns_1_if_array_length_is_not_zero(){
	int array[1]={1},length=1;
	assertEqual(forEach(array,square,length), 1);
}

void test_foreach_changes_the_array_after_exccution(){
	int array[3]={1,2,3};
	int length=3;
	assertEqual(forEach(array,square,length), 1);
	assertEqual(array[0], 1);
	assertEqual(array[1], 4);
	assertEqual(array[2], 9);

}

void test_foreach_float_retuns_zero_if_array_length_is_zero(){
	float *array;
	int length=0;
	assertEqual(forEach_float(array,cube,length), 0);
}

void test_foreach_float_retuns_1_if_array_length_is_not_zero(){
	float array[1]={1};
	int length=1;
	assertEqual(forEach_float(array,cube,length), 1);
}

void test_foreach_float_changes_the_array_after_exccution(){
	float array[3]={1,2,3};
	int length=3;
	assertEqual(forEach_float(array,cube,length), 1);
	assertEqual(array[0], 1.000000);
	assertEqual(array[1], 8.000000);
	assertEqual(array[2], 27.000000);

}

void test_foreach_char_retuns_zero_if_array_length_is_zero(){
	char *array;
	int length=0;
	assertEqual(forEach_char(array,replace,length), 0);
}

void test_foreach_char_retuns_1_if_array_length_is_not_zero(){
	char array[1]={'1'};
	int length=1;
	assertEqual(forEach_char(array,replace,length), 1);
}

void test_foreach_char_changes_the_array_after_exccution(){
	char array[3]={1,2,3};
	int length=3;
	assertEqual(forEach_char(array,replace,length), 1);
	assertEqual(array[0], '0');
	assertEqual(array[1], '0');
	assertEqual(array[2], '0');

}


