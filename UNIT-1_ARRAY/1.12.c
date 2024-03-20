//1.12 Enter your name and print it vertically
//RUCHIT GOHEL

#include<stdio.h>

void main()
{
    int i;
    char str[100];

    printf("\nEnter your name:");
    scanf("%s", str);

    printf("\nYour name vertically:");
    while(str[i]!='\0')
     {
         printf("\n%c", str[i]);
         i++;
     }
}
