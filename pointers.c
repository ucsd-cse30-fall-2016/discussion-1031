#include <stdio.h>
#include <assert.h>

void find_largest_two(int a[], int n, int *largest, int * sec_largest){

   *largest = a[0];
   *sec_largest = a[n-1];
   
   for (int i =1; i<n ; i++) {
 
        if (a[i]> *largest) {
            *sec_largest = *largest; 
            *largest = a[i];
        }
        else if( a[i]>*sec_largest)
            *sec_largest = a[i];
            
   }
   return;
}


void main(){

int arr[]={8, 3, 7, 7, 8, 7, 3};
int max, sec_max;

find_largest_two( arr, 1, &max, & sec_max);
assert( max == 8);
assert(sec_max ==8);


find_largest_two( arr, 2, &max, & sec_max);
assert( max == 8);
assert(sec_max ==3);


find_largest_two( arr+1, 2, &max, & sec_max);
assert( max == 7);
assert(sec_max ==3);


find_largest_two( arr+4, 3, &max, & sec_max);
assert( max == 8);
assert(sec_max ==7);

find_largest_two( arr+2, 2, &max, & sec_max);
assert( max == 7);
assert(sec_max ==7);
printf("\n Passed all tests \n");


}
