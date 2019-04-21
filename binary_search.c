Write a program to search an element in an array using binary search. 
#include<stdio.h>
void binary_search();
int i, n, mid, beg, end, a[20], item;
void main()
{
    int swapped =0, temp;
    printf("Enter The length of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    while(1)
    {

        for(i=0; i<n-1; i++)
        {   swapped =0;
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i]= a[i+1];
                a[i+1]= temp;
                swapped=1;
            }
        }
        if(swapped==0)
            break;
    }
    printf("Sorted array: \n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
    printf("\n\nEnter element to be searched: ");
    scanf("%d", &item);
    binary_search();
getch();
}
void binary_search()
{
        beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)
        printf("\n\nElement found at index %d", mid);
    else
        printf("\n\nElement does not exist");
}
