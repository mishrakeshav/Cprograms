// Write a program to merge elements in 2 different arrays and display it in descending order.
#include<stdio.h>
int a[20], b[20], merge[40], i, j, n, m, p, temp, swapped;
int merging();
int descending();

int main()
{

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);
    printf("\n Enter the elements of the array: \n");
    for(i=0; i<m; i++)
        scanf("%d", &a[i]);
    printf("\n\nEnter the number of elements in the second array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the second array: \n");
    for(i=0;i<n; i++)
        scanf("%d", &b[i]);
    merging();
    for(i=0; i<p-1; i++)
    {

        for(j=i+1; j<p; j++)
        {
            if(merge[i]<merge[j])
            {
                temp = merge[i];
                merge[i]= merge[j];
                merge[j]= temp;
                swapped=1;
            }
        }

    }
    printf("\n The merged array in descending order is: \n");
    for(i=0; i<p; i++)
        printf("%d\n", merge[i]);

return 0;




}
int merging(){
            // merging of arrays
    p=m+n;
    for(i=0; i<m; i++)
        merge[i]=a[i];
    for(i=m, j=0; i<p,j<n; i++, j++)
        merge[i]= b[j];

    printf("\n The merged array is: \n");
    for(i=0; i<p; i++)
        printf("%d\n", merge[i]);
}


