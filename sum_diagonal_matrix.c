// sum of non-diagonal elements
#include<stdio.h>
int main()
{
    int a[10][10];
    int i, j, m, sum=0;
    printf("Enter the number of rows/columns of the matrix: ");
    scanf("%d", &m);
    printf("Enter the elements of the matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i!=j)
                sum+= a[i][j];
        }
    }
    printf("\nThe sum of non-diagonal elements is: %d",sum );
return 0;

}
