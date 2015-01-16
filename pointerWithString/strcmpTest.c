#include "expr_assert.h"
#include "strcmp.h"
#include <string.h>


void test_for_string_compare_hello_and_hello(){
	char *w1="hello";
	char *w2="hello";
	assertEqual(strCompare(w1,w2), strcmp(w1,w2));
}

void test_for_string_compare_of_hellobyee_and_hellobyee(){
	char *p1="hellobyee";
	char *p2="hellobyee";
	assertEqual(strCompare(p1,p2), strcmp(p1,p2));
}

void test_for_string_compare_of_hellobyeeaaa_and_hellobyee(){
	char *p1="hellobyeeaaa";
	char *p2="hellobyee";
	assertEqual(strCompare(p1,p2), strcmp(p1,p2));
}