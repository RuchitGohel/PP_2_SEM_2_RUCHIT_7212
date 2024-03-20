//1.14 Print your name in reverse order without using function
//Ruchit Gohel

#include<stdio.h>

void main()
{
    int i,length,n;
    char str[100];

    printf("\nEnter your name:");
    scanf("%s", str);

    while(str[i]!='\0')
     {
         i+=1;
         i++;
     }
     length=i;

     for(n=length;n>=0;n--)
     {
         printf("%c", str[n]);
     }
}
