#include<stdio.h>
int main()
{
    printf("enter a no. : \n");
    int n;
    scanf("%d",&n);
    if(n<2)
    {
        printf("the number is not prime.");
    }
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("the number is not prime.");
        }
        else
        {
            printf("the number is prime.");
        }
        return 0;
    }
}