// Enter N elements and find minimum and maximum value

#include<stdio.h>

void main()
{
    int arr[3], i;

    printf("\nEnter array values:");

    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[0]>arr[1] && arr[0]>arr[2])
    {
        printf("\nV1 is maximum");
    }
    else if(arr[1]>arr[0] && arr[1]>arr[2])
    {
        printf("\nV2 is maximum");
    }
    else{
        printf("\nV3 is maximum");
    }


}
