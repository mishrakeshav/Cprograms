#include<stdio.h>
int main()
{
    int a[10][10], transpose[10][10], i, j, k, m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    // printing the matrix
    printf("The original matrix is: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // finding transpose
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            transpose[j][i]= a[i][j];
        }
    }
    // printing the transpose of the matrix
    printf("The transpose of the matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {

            printf("%d\t", transpose[i][j]);
        }
        printf("\n");

    }
return 0;

}
