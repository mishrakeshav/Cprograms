// Write a program to find and display addition of 2 matrices.
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, m, n;
    printf("Enter the order of the matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix A: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the matrix B: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix A: \n");
        for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B: \n");
        for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
    printf("Addition of matrix A and B is : \n");
        for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
return 0;


}
