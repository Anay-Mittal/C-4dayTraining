#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int a=65;//ye ascii value hai A ki, a ki 97 smthn hai
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}