#include <stdio.h>
#include "indexof.h"
#include "expr_assert.h"

void test_to_check_the_substring_which_(){
	char str[] = "poojajag";
	char substr[] = "mm";
	assertEqual(findIndex(str,substr),-1);
}

void test_to_check_the_substring(){
	char str[] = "poojajag";
	char substr[] = "oo";
	assertEqual(findIndex(str,substr),1);
}