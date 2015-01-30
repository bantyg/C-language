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

void * getElementAt(LinkedList l1, int index ){
	int i;
	Node* walker = l1.head;
	if(index>=l1.count){
		return NULL;
	}
	for ( i = 0; i<index; i++){
		walker = walker->next;
	}
		return &(walker->data);
}

int indexOf(LinkedList l1, void *data){
	int i,flag;
	Node* walker = l1.head;
	int walkerIndex;
	for (i = 0; i < l1.count-1; i++){	
		if((char)walker->data == *(char*)data){
			flag=i;
			return flag;
		}
		walker = walker->next;
	}
	return -1;
}

void * deleteElementAt(LinkedList* l1, int index){
	int i;
	Node* walker = (*l1).head;
	for ( i = 0; i<l1->count-1; i++){
		if(i==index-1 ){
			walker->next = walker->next->next;
		}
		walker = walker->next; 
	}
	return &(walker->data);
}

