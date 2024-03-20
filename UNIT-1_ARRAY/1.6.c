//1.6 Enter N elements and arrange them in reverse order.
//RUCHIT_GOHEL_7212
//21-02-2024

#include<stdio.h>

void main()
{
    int a[50],i,n;

    printf("\nEnter the number of elements for array:");
    scanf("%d", &n);

    printf("\nElements for array 'a' are :");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nElements of a[%d] : %d", i,a[i]);
    }
    printf("\nElements of array a in reverse order are:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("\nElements at a[%d]: %d", i,a[i]);
    }
}
