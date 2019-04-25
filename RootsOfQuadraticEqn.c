#include<stdio.h>
#include<math.h>

int main()
{
    int b, a, c;
    // quadratic equation ax^2+ bx + c=0
    float root1, root2, delta, real, imaginary;
    printf("Enter the value of a , b, c(ax^2+ bx + c=0)\n ");
    scanf("%d %d %d", &a, &b, &c);
    delta= b*b- 4*a*c;
    /* if delta >0 then roots are real and not equal
     if delta =0 then roots are real and equal
    if delta <0 then roots are imaginary*/
    if(delta>0)
    {
        root1= (-b+sqrt(delta))/ (2*a);
        root2= (-b-sqrt(delta))/ (2*a);
        printf("\nRoots are real and unequal: ");
        printf("\nX= %.2f OR X= %.2f", root1, root2);

    }
    else if(delta ==0)
    {
        root1= (-b+sqrt(delta))/ (2*a);
        root2= root1;
        printf("\nRoots are real and equal: ");

        printf("\nX= %.2f", root1);
    }
    else{
        printf("\nRoots are imaginary");
        delta= 4*a*c-b*b;
        real = (-b)/(2*a);
        imaginary= (sqrt(delta))/(2*a);
        printf("\nX= %.2f + i%.2f",real, imaginary);
        printf("\nX= %.2f + i%.2f",real, imaginary);


    }
    return 0;

}
