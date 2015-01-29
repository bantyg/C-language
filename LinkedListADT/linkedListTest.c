#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>
#include <ctype.h>
#include "expr_assert.h"

void test_to_create_linked_list(){
	LinkedList l1 = createList();
	assert(l1.head==NULL);
	assert(l1.tail==NULL);
	assertEqual(l1.count,0);
}

void test_to_create_a_node(){
	int data = 2;
	Node *n1 = create_node((void*)data);
	assertEqual((int)n1->data,2);
	assert(n1->next==NULL);
} 

void test_to_add_one_node_in_linked_list(){
	int data = 2;
	Node *n1 = create_node((void*)data);
	LinkedList l1=createList();
	add_to_list(&l1,n1);
	assert(l1.head != NULL);
	assertEqual((int)l1.head,(int)n1);
	assertEqual((int)l1.count,1);
}

void test_to_add_more_than_one_node_in_linked_list(){
	int d1=1,d2=2;
	Node *n1 = create_node((void*)d1);
	Node *n2 = create_node((void*)d2);
	LinkedList l1=createList();
	add_to_list(&l1,n1);
	add_to_list(&l1,n2);
	assertEqual((int)l1.head,(int)n1);
	assertEqual((int)l1.tail,(int)n2);

}
void test_get_first_element_gives_the_first_element_of_the_list(){
	int d1=1,d2=2;
	Node *n1 = create_node((void*)d1);
	Node *n2 = create_node((void*)d2);
	LinkedList l1=createList();
	add_to_list(&l1,n1);
	add_to_list(&l1,n2);
	assertEqual((int)get_first_element(l1),(int)n1);
	assertEqual((int)l1.count,2);
}

void test_get_last_element_gives_the_last_element_of_the_list(){
	int d1=3,d2=5;
	Node *n1 = create_node((void*)d1);
	Node *n2 = create_node((void*)d2);
	LinkedList l1=createList();
	add_to_list(&l1,n1);
	add_to_list(&l1,n2);
	assertEqual((int)get_last_element(l1),(int)n2);
	assertEqual((int)l1.count,2);
}


void add1(void* num){
	*((int*)num)+=1;
}

void test_traverse_goes_through_each_element_of_the_list_with_int_data(){
	int d1=3,d2=4;
	Node *n1 = create_node((void*)d1);
	Node *n2 = create_node((void*)d2);
	LinkedList l1=createList();
	add_to_list(&l1,n1);
	add_to_list(&l1,n2);
	traverse(l1,add1);
	assert((int)l1.head->data==4);
}

void changeToUpper(void* ch){
	char* chh = (char*)(ch);
	*chh = toupper(*chh);
}

void test_traverse_goes_through_each_element_of_the_list_with_char_data(){
	char c1='a',c2='b';
	Node *n1 = create_node((void*)c1);
	Node *n2 = create_node((void*)c2);
	LinkedList l1=createList();
	add_to_list(&l1,n1);
	add_to_list(&l1,n2);
	traverse(l1,changeToUpper);
	assertEqual((char)l1.head->data,'A');
	assertEqual((char)l1.tail->data,'B');
}









