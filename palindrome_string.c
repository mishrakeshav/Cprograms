// Write a program to find whether entered string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20];
    puts("Enter a string to check if it is palindrome or not? ");
    gets(a);
    strcpy(b, a);
    strrev(b);
    if(strcmp(a, b)==0)
            puts("Entered string is a palindrome");
    else
            puts("Entered string is not a palindrome");
return 0;
}
