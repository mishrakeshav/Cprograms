// binary search using recursion...
#include<stdio.h>
int b_search(int a[], int s, int start, int end); //function prototype
int main()
{
    int a[20], n, search, i;
    printf("Enter number of elements of the array: \n");
    scanf("%d", &n);
    printf("\nEnter Elements in ascending order : \n"); 
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter number to search : ");
    scanf("%d", &search);
    int k= b_search(a, search, 0, n-1);
    if(k==-1)
        printf("\nValue not found!");
    else
        printf("\nValue found at index %d", k);
    return 0;
}
int b_search(int a[], int s, int start , int end)
{
   if(s>end)
    return -1;
   int mid= (start+ end)/2;

   return(s==a[mid]? mid:s<a[mid]? b_search(a, s, start, mid-1 ): b_search(a, s, mid+1, end ));
}
