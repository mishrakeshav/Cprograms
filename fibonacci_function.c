#include <stdio.h>
#include <stdlib.h>
void  f(int n)      //function with  no return value 
{   
    // declare an array to store the series
    int f[n+1]; // one extra for 0th index 
    f[0]=0;
    f[1]=1;
    printf("%d\n", f[1]);
    int i;
    for(i=2; i<n; i++)
    {
            f[i]= f[i-1]+f[i-2];
            printf("%d\n", f[i]); // printing the series 
    }
    

}
int main()
{
    int  n;
    // asking the user ,the length of the series.
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Error: The length of the series cannot be 0 or negative!!");
        exit(1);
    }
    printf("Fibonacci series is: \n");
    f(n);

    return 0;
}

