// multiplication of square matrix
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, n, sum=0;
    printf("Enter the number of rows/columns of the first matrix:  ");
    scanf("%d", &n);
    printf("Enter the elements of the first matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter The elements of the second matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &b[i][j]);
        }
    }
    // multiplication of matrix
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                sum+= a[i][k]*b[k][i];
            }
            c[i][j]=sum;
            sum=0;
        }

    }
    // printing the matrix
    printf("The multiplication of the matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
return 0;


}
