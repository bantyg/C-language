#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>
#include "expr_assert.h"

void test_to_create_linked_list(){
	LinkedList l1 = createList();
	assert(l1.head==NULL);
	assert(l1.tail==NULL);
	assertEqual(l1.count,0);
}

void test_to_create_a_node(){
	int data = 2;
	Node n1 = create_node(&data);
	assertEqual(n1.data,2);
	assert(n1.next==NULL);
} 

void test_to_add_one_node_in_linked_list(){
	int data = 2;
	Node n1 = create_node(&data);
	LinkedList l1=createList();
	add_to_list(&l1,&n1);
	assert(l1.head != NULL);
	assertEqual((int)l1.head,(int)&n1);
	assertEqual((int)l1.count,1);
}

void test_get_first_element_gives_the_first_element_of_the_list(){
	int d1=1,d2=2;
	Node n1 = create_node(&d1);
	Node n2 = create_node(&d2);
	LinkedList l1=createList();
	add_to_list(&l1,&n1);
	add_to_list(&l1,&n2);
	assertEqual((int)get_first_element(l1),(int)&n1);
	assertEqual((int)l1.count,2);
}

void test_get_last_element_gives_the_last_element_of_the_list(){
	int d1=3,d2=5;
	Node n1 = create_node(&d1);
	Node n2 = create_node(&d2);
	LinkedList l1=createList();
	add_to_list(&l1,&n1);
	add_to_list(&l1,&n2);
	assertEqual((int)get_last_element(l1),(int)&n2);
	assertEqual((int)l1.count,2);
}


void add1(void* num){
	*((int*)num)+=1;
}

// void test_traverse_goes_through_each_element_of_the_list(){
// 	int d1=3,d2=4;
// 	Node n1 = create_node(&d1);
// 	Node n2 = create_node(&d2);
// 	LinkedList l1=createList();
// 	add_to_list(&l1,&n1);
// 	add_to_list(&l1,&n2);
// 	traverse(l1,add1);
// }








