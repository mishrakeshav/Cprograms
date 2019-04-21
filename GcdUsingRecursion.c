#include<stdio.h>
int gcd(int a, int b) // declaring and defining function
{
    if(b>a)
    {
        int temp = a;
        a =b;
        b = temp;
    }
    int remainder;
    remainder= a%b;
    if(remainder==0)
        return b;
    else
        return gcd(b, remainder);  // recursive function gcd.

}
main()
{
    int n1, n2;
    printf("\nEnter the numbers: \n");
    scanf("%d %d", &n1, &n2);
    printf("\nThe GCD of %d and %d is %d", n1, n2, gcd(n1, n2));
}
