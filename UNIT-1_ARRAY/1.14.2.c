//1.14.2 Print your name in reverse order without using function
//Ruchit

#include<stdio.h>
#include<string.h>

void main()
{
    int i;
    char str[100];

    printf("\nEnter your name:");
    scanf("%s", str);

   printf("\nReverse string is : %s", strrev(str));
}
