//1.2 Enter N elements and find its average and sum

#include<stdio.h>

void main(){
 int arr[5], i;
 float sum=0, avg;

 printf("\nEnter array values :");
 for(i=0; i<5; i++){
  scanf("%d", &arr[i]);
  sum = sum + arr[i];
 }
 printf("\nThe total of array values is : %f", sum);
 avg = sum / 5;
 printf("\nThe average of array values is : %f", avg);
}
