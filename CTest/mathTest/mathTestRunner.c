#include <stdio.h>
typedef void TestFn(void);
typedef struct{
	char* name; 
	TestFn* fn;
} Test;

//code to be updated starts
TestFn setup,tearDown,fixtureSetup,fixtureTearDown,test_fibo_of_4_terms,test_fibo_of_minus_terms,test_concat_two_array,test_to_filter_the_array,test_to_reverse_the_array,test_to_reverse_the_array_in_result_array,test_to_slice_the_array,test_to_find_prime_number,test_to_find_prime_number_from_1_to_100;
Test test[] = {"test_fibo_of_4_terms",test_fibo_of_4_terms,"test_fibo_of_minus_terms",test_fibo_of_minus_terms,"test_concat_two_array",test_concat_two_array,"test_to_filter_the_array",test_to_filter_the_array,"test_to_reverse_the_array",test_to_reverse_the_array,"test_to_reverse_the_array_in_result_array",test_to_reverse_the_array_in_result_array,"test_to_slice_the_array",test_to_slice_the_array,"test_to_find_prime_number",test_to_find_prime_number,"test_to_find_prime_number_from_1_to_100",test_to_find_prime_number_from_1_to_100};
char testFileName[] = {"mathTest.c"};
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