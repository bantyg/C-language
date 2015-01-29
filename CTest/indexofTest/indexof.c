#include "indexof.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findIndex(char *str,char *substr){
	int stringlen = strlen(str);
	int sbstrlen = strlen(substr);
	int i,j,k=0,index=-1;
	for (i = 0; i < stringlen; i++){
		for(j=0;j<sbstrlen;j++){
			if(str[i+j] == substr[j]){
				k++;
			}
		}
		if(k == sbstrlen){
			index = i;
			break;
		}
		k=0;
	} 
	return index;
}