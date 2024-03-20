//1.8 Print a 3*3 matrix
//RUCHIT_7212
//28-02-2024

#include<stdio.h>

void main()
{
 int a[3][3];

 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     {
         printf("Enter %d element for %d matrix [%d][%d]:", i,j,i,j);
         scanf("%d", &a[i][j]);
         printf("\n");
     }
 }
 printf("\nThe 3x3 matrix is:\n");
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     {
         printf("[%d]", a[i][j]);
     }
     printf("\n");
 }

}
