// Enter N elements and find its average and total

#include<stdio.h>

void main(){
 int arr[5], i, total, avg;

 printf("\nEnter the array values:");
 for(i=0; i<5; i++){
    scanf("%d", &arr[i]);
 }
 total = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
 printf("\nThe total of the elements of array is: %d", total);

 avg = total / 5;
 printf("\nThe average of the values of array is : %d", avg);
}
