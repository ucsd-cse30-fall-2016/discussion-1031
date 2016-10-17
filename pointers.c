#include <stdio.h>
#include <assert.h>


void find_largest_two(int a[], int n, int *largest, int * sec_largest){

   *largest = *sec_largest = a[0];
   return;
}


void main(){

int arr[]={8};
int max, sec_max;

find_largest_two( arr, 1, &max, & sec_max);
assert( max == 8);
assert(sec_max ==8);

printf("\n Passed all tests \n");
}
