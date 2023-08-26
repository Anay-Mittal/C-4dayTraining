#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int a=65;
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=5;j>=i;j--)
        {
            printf("%c ",a);
            a=a+1;
        }
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
    return 0;
}