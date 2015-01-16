#include <stdio.h>
typedef void TestFn(void);
typedef struct{
	char* name; 
	TestFn* fn;
} Test;

//code to be updated starts
TestFn setup,tearDown,fixtureSetup,fixtureTearDown,test_foreach_retuns_zero_if_array_length_is_zero,test_foreach_retuns_1_if_array_length_is_not_zero,test_foreach_changes_the_array_after_exccution,test_foreach_float_retuns_zero_if_array_length_is_zero,test_foreach_float_retuns_1_if_array_length_is_not_zero,test_foreach_float_changes_the_array_after_exccution,test_foreach_char_retuns_zero_if_array_length_is_zero,test_foreach_char_retuns_1_if_array_length_is_not_zero,test_foreach_char_changes_the_array_after_exccution,test_foreach_string_return_1_if_array_length_is_not_zero;
Test test[] = {"test_foreach_retuns_zero_if_array_length_is_zero",test_foreach_retuns_zero_if_array_length_is_zero,"test_foreach_retuns_1_if_array_length_is_not_zero",test_foreach_retuns_1_if_array_length_is_not_zero,"test_foreach_changes_the_array_after_exccution",test_foreach_changes_the_array_after_exccution,"test_foreach_float_retuns_zero_if_array_length_is_zero",test_foreach_float_retuns_zero_if_array_length_is_zero,"test_foreach_float_retuns_1_if_array_length_is_not_zero",test_foreach_float_retuns_1_if_array_length_is_not_zero,"test_foreach_float_changes_the_array_after_exccution",test_foreach_float_changes_the_array_after_exccution,"test_foreach_char_retuns_zero_if_array_length_is_zero",test_foreach_char_retuns_zero_if_array_length_is_zero,"test_foreach_char_retuns_1_if_array_length_is_not_zero",test_foreach_char_retuns_1_if_array_length_is_not_zero,"test_foreach_char_changes_the_array_after_exccution",test_foreach_char_changes_the_array_after_exccution,"test_foreach_string_return_1_if_array_length_is_not_zero",test_foreach_string_return_1_if_array_length_is_not_zero};
char testFileName[] = {"forEachTest.c"};
void _setup(){/*CALL_SETUP*/}
void _tearDown(){/*CALL_TEARDOWN*/}
void fixtureSetup(){}
void fixtureTearDown(){}
//code to be updated ends

int testCount;
int passCount;
int currentTestFailed;

int assert_expr(int expr, const char* fileName, int lineNumber, const char* expression){
	if(expr) return 0;
	currentTestFailed = 1;
	printf("\t\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
	return 1;
}
int assert_equal(int val1, int val2, const char* fileName, int lineNumber,const char* expr1,const char* expr2){
	if(val1 == val2) return 0;
	currentTestFailed = 1;
	printf("\t\t %d == %d: failed in assertEqual(%s,%s) at %s:%d\n",val1,val2,expr1,expr2, fileName,lineNumber);
	return 1;
}

void runTest(char* name, TestFn test){
	testCount++,currentTestFailed=0;
	printf("\t%s\n",name);
	_setup();
		test();
	_tearDown();
	if(!currentTestFailed) passCount++;	
}

int main(){
	int i,total = sizeof(test)/sizeof(Test);
	fixtureSetup();
	testCount=0,passCount=0;
	printf("********* Starting tests of %s\n\n",testFileName);
	for (i = 0; i < total; ++i)
		runTest(test[i].name,test[i].fn);
	printf("\n********* Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
	fixtureTearDown();
	return 0;
}