//13/-02-2024
//RUCHIT GOHEL_7212
//Enter N elements and find out maximum and minimum values among it.

#include<stdio.h>

void main()
{
    int arr[5],min,max,i;

    printf("\nEnter elements of array:");

    for(i=0;i<5;i++)
    {
        scanf("\n%d", &arr[i]);
    }

    min=max=arr[0];

    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
        if(arr[i]<min)
        {
        min=arr[i];
        }
    }

    printf("\nMinimum value among the array is: %d", min);
    printf("\nMaximum value among the array is: %d", max);

}
