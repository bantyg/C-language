#include <stdio.h>
#include <stdlib.h>
#include "binary_print.h"

char * get_byte_as_string(char byte) {
	unsigned char mask=0x80;
	char *bin_string;
	int i=0;

	bin_string=malloc(sizeof(char)*9);
	while(mask != 0) {
		bin_string[i]=byte&mask?'1':'0';
		mask = mask >> 1;
		i++;
	}
	bin_string[i]='\0';
	return bin_string;
}

void print_bytes_between(void *from, void *to) {
	char *byte = from;
	char *bin_string;
	int i=0;
	if(from>to) {
		printf("%p is higher than %p\n", from,to);
	}
	while(byte<=(char *)to) {
		if(i%4==0) {
			printf("\n%p ", byte);
		}
		bin_string=get_byte_as_string(*byte);
		printf("%s ", bin_string);
		byte++;
		i++;
		free(bin_string);
	}

}
