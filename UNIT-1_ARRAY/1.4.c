//14-02-2024
//RUCHIT_GOHEL_7212
//Enter N elements and find out positive,negative,zero,odd and even number among it.

#include<stdio.h>

void main()
{
    int arr[10],pos=0,neg=0,odd=0,even=0,i,zero=0;

    printf("\nEnter 10 values that are mix of negative,positive,odd \n and even:");

    for(i=0;i<10;i++)
    {
        scanf("\n%d", &arr[i]);


    if(arr[i]==0)
        {
            zero++;

        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            even++;
        }
        if(arr[i]==0)
        {

        }
        else if(arr[i]%2!=0)
        {
            odd++;
        }
        else{
            even++;
        }
    }
    printf("\n Positive numbers: %d", pos);
    printf("\n Negative numbers: %d", neg);
    printf("\n Odd numbers: %d", odd);
    printf("\n Even numbers: %d", even);
    printf("\n Zero numbers: %d", zero);
}
