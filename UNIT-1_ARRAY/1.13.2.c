//1.13 Enter your name and find the length of the string using function
//Ruchit Gohel

#include<stdio.h>
#include<string.h>

void main()
{
    char Str[100];
    int i;

    printf("Enter the String: ");
    scanf("%s", Str);

    printf("Length of Str is %ld", strlen(Str));
}
