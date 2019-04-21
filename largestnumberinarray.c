#include<stdio.h>
// declaring and defining function to sort array
void bubbleSort(int a[], int n)
{
    int i, j, flag, temp;
    for(i=0; i<n; i++)
    {   //Setting a flag to zero
        flag=0;
        for(j=0; j<n-i-1; j++)
        {
                if(a[j]>a[j+1])
                {   // Swap
                    temp = a[j];
                    a[j]= a[j+1];
                    a[j+1]= temp;
                    flag=1;
                }
        }
        // if flag is zero then the loop will break 
        if(!flag)
            break;
    }
    // printing out the sorted array
    printf("\n\nSORTED ARRAY: \n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
    // printing the largest and second largest number in the array
    printf("\n\nLargest Number : %d", a[n-1]);
    printf("\nSecond largest number: %d", a[n-2]);
}
int main()
{
    int a[20], n, i;
    printf("Enter number of elements to be sorted: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter Element no. %d: ", i+1);
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    return 0;
}
