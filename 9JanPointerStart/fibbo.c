#include <stdio.h>
int reverse(int *array,int size){
  int i,j,temp;
  for(i = size-1,j=0; i>=0,j<size; --i,++j){
    temp = array[j];
    array[j] = array[i];
    printf("aaaaaaaaaaaaaaaa   %d\n",array[j] );
    array[i] = temp;

   
  }
  return 1;
}
int main(){
  int array[3] = {1,2,3};
  reverse(array,3); 
}

// int i,tmp,end;
// end = length-1;
// for (i = 0; i < length/2; i++) {
// tmp = array[i];
// array[i] = array[end];
// array[end] = tmp;    
// end--;
// }


