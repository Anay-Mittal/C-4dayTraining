#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int a=65;
        for(int j=5;j>=i;j--)
        {
            printf("%c",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}