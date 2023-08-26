#include<stdio.h>
int main()
{
    printf("enyter a number : \n");
    int a,fact=1;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",a,fact);
    return 0;
}