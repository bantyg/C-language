#include "expr_assert.h"
#include "math.h"
void test_fibo_of_4_terms(){
	int *array;
	array = (int *)malloc(sizeof(int)*5);
	assertEqual(generateFibbo(5,array),1);
	assertEqual(array[0],0);
	assertEqual(array[1],1);

}
void test_fibo_of_minus_terms(){
	int *array;
	array = (int *)malloc(sizeof(int)*5);
	assertEqual(generateFibbo(-5,array),1);
}
void test_concat_two_array(){
	int frstArray[2]={0,1};
	int scndArray[3] = {2,3,4};
	int *concatArray;
	concatArray = (int *)malloc(sizeof(int)*5);
	assertEqual(concat(frstArray,2,scndArray,3,concatArray),1);
	assertEqual(concatArray[0],0);
	assertEqual(concatArray[1],1);
	assertEqual(concatArray[2],2);
	assertEqual(concatArray[3],3);
	assertEqual(concatArray[4],4);

}
void test_to_filter_the_array(){
	int userArray[5] = {100,90,85,95,82};
	int threshold = 90;
	int *result_array;
	assertEqual(filter(userArray,5,threshold,&result_array),1);
	assertEqual(result_array[0],85);
	assertEqual(result_array[1],82);
	
}

void test_to_reverse_the_array(){
	int array[5] = {1,2,3,4,5};
	assertEqual(reverse(array,5),1);
	assertEqual(array[0],5);
	assertEqual(array[1],4);
	assertEqual(array[2],3);
	assertEqual(array[3],2);
	assertEqual(array[4],1);
}

void test_to_reverse_the_array_in_result_array(){
	int array[5] = {1,2,3,4,5};
	int *result_array;
	result_array = (int *)malloc(sizeof(array));
	assertEqual(reverseInNeawArray(array,5,result_array),1);
	assertEqual(result_array[0],5);
	assertEqual(result_array[1],4);
	assertEqual(result_array[2],3);
	assertEqual(result_array[3],2);
	assertEqual(result_array[4],1);
}

void test_to_slice_the_array(){
	int array[7] = {1,2,3,4,5,6,7};
	int *result_array;
	assertEqual(slice(array,7,2,5,&result_array),3);
	assertEqual(result_array[0],3);
	assertEqual(result_array[1],4);
	assertEqual(result_array[2],5);
}

void test_to_find_prime_number(){
	int start=2;
	int end=10;
	int *result_array;
	assertEqual(findPrime(start,end,&result_array),4);
	assertEqual(result_array[0],2);
	assertEqual(result_array[1],3);
	assertEqual(result_array[2],5);
	assertEqual(result_array[3],7);

}
void test_to_find_prime_number_from_1_to_100(){
	int start=2;
	int end=100;
	int *result_array;
	result_array = (int *)malloc(sizeof(int)*50);
	assertEqual(findPrime(start,end,result_array),25);
}








