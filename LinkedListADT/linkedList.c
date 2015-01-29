#include <stdio.h>
#include "linkedList.h"
#include <string.h>
#include <stdlib.h>


LinkedList createList(int data){
	LinkedList l1 = {NULL,NULL,0};
	return l1;
}

Node create_node(void* data){
	char* charData = (char *)data;
	Node n1 = {*charData,NULL};
	return n1;
}

int add_to_list(LinkedList *l1,Node *n1){
	void* addrOfTail =&((*l1).tail);
	if((*l1).head==NULL){
		(*l1).head = n1;
	}
	else{
		(*l1).tail = n1;
		(*n1).next = addrOfTail;
	}
	(*l1).count++;
	return 0;
}

void *get_first_element(LinkedList list){
	return list.head;
}

void *get_last_element(LinkedList list){
	return list.tail;
}

// void traverse(LinkedList list, void operation(void *data)){
// 	for (int i = 1; i <= list.count; i++){
// 		if(list.count==i){
// 			operation(list.head)->data);
// 		}
// 	}
// }