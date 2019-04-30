//Write a program to find x^y using recursion
#include<stdio.h>
int power(int x, int y)
{
    if(y==0)
        return 1;
    else if(y==1)
        return x;
    else if(y>0)
    {
        y--;
        return x*power(x,y);
    }
}
int main()
{
    int x, y;
    printf("Enter the value of base and power:\n");
    scanf("%d %d", &x, &y);
    printf("The value of x^y is %d", power(x, y));
    return 0;
}
