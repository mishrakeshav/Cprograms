//Armstrong Number...
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rem, number, sum, temp; // declaring variables of type int
    printf("Enter the number: \n");
    scanf("%d", &number);
    sum=0;
    temp= number;
    while(temp!=0)  // condition can also be (temp>0)
    {								
        rem= temp%10; 
        sum = sum+ (rem*rem*rem);
        temp= temp/10;

    }
    if(sum==number)
        printf("\n%d is an Armstrong number!", number);
    else
        printf("\n%d is not an Armstrong number!", number);
    return 0;
}
