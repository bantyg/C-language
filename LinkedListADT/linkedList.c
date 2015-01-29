#include <stdio.h>
#include "linkedList.h"
#include <string.h>
#include <stdlib.h>


LinkedList createList(int data){
	LinkedList l1 = {NULL,NULL,0};
	return l1;
}

Node* create_node(void* data){
	// char* charData = (char *)data;

	Node *n1 = malloc(sizeof(Node));
	n1->data = data;
	n1->next = NULL;
	return n1;
}

int add_to_list(LinkedList *l1,Node *n1){
	if((*l1).head==NULL){
		(*l1).head = n1;
		(*l1).tail = n1;
	}
	else{
		l1->tail->next = n1;
		(*l1).tail = n1;
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

void traverse(LinkedList list, void (*func)(void* data)) {
	Node* walker = list.head;
	while(walker!=NULL){
		func(&(walker->data));
		walker = walker->next;
	}
}