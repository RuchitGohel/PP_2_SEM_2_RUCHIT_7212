// Enter N elements and print it

#include<stdio.h>

void main(){
 int arr[5], i;
 printf("\nEnter the array values:");
 for(i=0; i<5; i++){
   scanf("\n%d", &arr[i]);
    }
    printf("You have entered:");
    for(i=0; i<5; i++){
        printf("\nArray element of %dth index is %d", i, arr[i]);
    }
}
