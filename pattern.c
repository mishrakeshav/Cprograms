#include<stdio.h>
main()
{
    int i,j, k=1;
    for(i=0; i<5; i++)
    {
        if(i%2==0)
        {   k=1;
            for(j=0;j<=i; j++){
                printf("%d",k);
                k++;
            }
        }
        if(i%2!=0)
        {   k=i+1;
            for(j=i; j>=0; j--)
            {
                printf("%d", k);
                k--;
            }
        }
        printf("\n");
}
}
//output:
/*
1
21
123
4321
12345
*/
