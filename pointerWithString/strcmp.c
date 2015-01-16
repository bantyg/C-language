#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strcmp.h"

int strCompare(char *w1,char *w2){
	int i,diff;
	if(strlen(w1) == strlen(w2)){
		for(i=0 ; i<strlen(w1);i++){
			diff = w1[i]-w2[i];
		}
		return diff;
	}
	else{
		return w1[strlen(w1)-1]-w2[strlen(w2)-1];
	}
}
