//Transpose using same matrix
#include<stdio.h>
int main()
{
    int a[20][20], i, j, m, n, temp;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &m, &n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nEnter element[%d, %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<i; j++)
        {   if(i!=j){
            temp= a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            }
        }
    }
    printf("\nTranspose: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;


}
