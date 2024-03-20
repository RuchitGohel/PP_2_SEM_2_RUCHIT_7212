//1.9 Perform addition of two matrices
//28-02-2024
//RUCHIT_7212

#include<stdio.h>

void main()
{
    int m,n,i,j;

    printf("\nEnter number of rows and columns for matrices :");
    scanf("%d %d", &m,&n);

    int a[m][n],b[m][n],c[m][n];

    printf("\nEnter elements for array 'a':");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\n", &a[i][j]);
        }
    }
    printf("\nEnter elements for array 'b':");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\n", &b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nThe sum of two matrices is :");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\n", c[i][j]);
        }
        printf("\n");
    }
}
