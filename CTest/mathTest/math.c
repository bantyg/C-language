#include <stdio.h>
# include <stdlib.h>
#include "math.h"

int generateFibbo(int noOfTerms,int *arr){
	int first = 0;
	int second = 1;
	int fibo, i;
   	for ( i = 0 ; i <noOfTerms ; i++ )
   	{
      	if ( i == 0 )
        	fibo = 0;
        	arr[0] = 0;
     	if ( i == 1 ){
        	fibo = 1;
        	arr[1] = 1;
        }
      	else{
         	fibo = first + second;
         	first = second;
         	second = fibo;
         	arr[i] = fibo;
      	}
   	}
   	if(fibo <0){
   		return 0;
   	}
   	else{
   		return 1;
   	}

}	


int concat(int *array1, int len_of_array1, int *array2, int len_of_array2, int *result_array){
	int i,j,size;
	size = len_of_array1+len_of_array2;
	for (i = 0; i < len_of_array1; i++){
		result_array[i]=array1[i];
	}
	for (i = len_of_array1,j=0; i < size,j<len_of_array2; i++,j++){
		result_array[i] = array2[j];
	}
	if(result_array[0] == array1[0] && result_array[len_of_array1] == array2[0]){
		return 1;
	}
}

int filter(int *array, int size, int threshold, int **filteredArray){
	int i,j = 0,count;
	for (i = 0; i < size; i++){
		if(array[i] < threshold){
			count++;
		}
	}
	*filteredArray = malloc(sizeof(int)*count);
	for (i = 0; i < size; i++){
		if(array[i] < threshold){
			(*filteredArray)[j]=array[i];
			j++;
		}
	}
	return 1;
}

int reverse(int *array,int size){
	int i,temp,last;
	last = size-1;
	for (i = 0; i < size/2; i++) {
		temp = array[i];
		array[i] = array[last];
		array[last] = temp;    
		last--;
	}
	return 1;
}

int reverseInNeawArray(int *array,int size,int *resultArray){
	int i,j;
	for (i = size-1,j=0; i>=0,j<size; i--,j++) {
		resultArray[j] = array[i];
	}
	return 1;
}


int slice(int *array,int size, int startIndex, int endIndex,int **resultArray){
	int i,j=0;
	*resultArray = malloc(sizeof(int)*(endIndex - startIndex));
	for (i = startIndex; i<endIndex; i++){
		(*resultArray)[j] = array[i];
		j++;
	}
	if(endIndex>size){
		return 0;
	}
	return j;
}

int countPrime(int start,int end){
	int i, j, notPrime,prime=0,store=0;
  	for(i=start; i<end;i++){
  		if(prime == store+1){
  			store = prime;
  		}
	    notPrime=0;
	    for(j=2; j<=i/2;j++){
	        if(i%j==0){
		        notPrime=1;
	        }
	    }
	    if(notPrime==0){
	        prime++;
	    }
	}
  	return prime;
}

int findPrime(int start,int end,int **result_array){
	int i, j, notPrime,prime=0,store=0;
	printf("aaaaaaaaaaaaaaaaaaa    %d\n", countPrime(start,end));
	*result_array = (int *)malloc(sizeof(int)*countPrime(start,end));
  	for(i=start; i<end;i++){
  		if(prime == store+1){
  			store = prime;
  		}
	    notPrime=0;
	    for(j=2; j<=i/2;j++){
	        if(i%j==0){
		        notPrime=1;
	        }
	    }
	    if(notPrime==0){
	        (*result_array)[prime]=i;
	        prime++;
	    }
	}
  	return prime;
}
