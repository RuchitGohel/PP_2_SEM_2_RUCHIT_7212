//Copy elements of an array to another.
//RUCHIT_GOHEL_7212
//21-02-24

#include<stdio.h>

void main()
{
    int a[50],b[50],i,n;

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
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("\n\n\n\n\nElements of b[%d] : %d", i,b[i]);
    }

}
