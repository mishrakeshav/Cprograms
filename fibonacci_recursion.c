#include <stdio.h>
#include <stdlib.h>
// declaring and defining function to return the terms of the series
int f(int n)
{
    if(n<=2)
        return 1;
    else
        return (f(n-1)+ f(n-2));
}

int main()
{
    int i, n;
    // asking the user ,the length of the series.
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Error: The length of the series cannot be 0 or negative!!");
        exit(1);
    }
    printf("Fibonacci series is: \n");
    for(i=1; i<n; i++)
    {
        printf("%d\n", f(i)); // printing the series. 
    }
    return 0;
}
