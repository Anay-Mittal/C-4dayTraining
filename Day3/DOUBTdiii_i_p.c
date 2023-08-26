#include<stdio.h>
int main()
{
    int a=1;
    for(int i=1;i<=5;i++)
    {
        a=i;
        printf(" ");
        printf(" ");
        printf(" ");
        printf(" ");
        for(int k=i;k<=5;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}