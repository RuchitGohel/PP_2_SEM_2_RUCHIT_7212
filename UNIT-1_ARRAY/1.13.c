//1.13 Enter your name and find the length of the string without using function
//Ruchit Gohel
#include<stdio.h>

void main()
{
    int i,length;
    char str[100];

    printf("\nEnter your name:");
    scanf("%s", str);

    while(str[i]!='\0')
     {
         i+=1;
         i++;
     }
     length=i;

     printf("\nThe length of the string is : %d", length);
}
