//Write a program using recursion to find sum of elements of size n
#include<stdio.h>
int sum(int a[20], int n);
int main()
{
	int a[20], n, i;
	printf("Enter number of elements:\n");
	scanf("%d", &n);
	printf("Enter Elements :\n");
	for(i=0; i<n; i++)
	{
		printf("\nEnter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nThe sum of elements of the array is %d", sum(a, n-1));
return 0;
}
int sum(int a[20], int n)
{
	if(n==0)
		return a[n];
	else if(n>0)
		return a[n]+ sum(a, n-1);
}