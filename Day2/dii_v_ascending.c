#include<stdio.h>
int main()
{
    printf("enter the numbers: ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b&&a<=c)
    {
        if(b<=c)
        {
        printf("1. %d, 2. %d, 3. %d",a,b,c);
        }
        else
        {
            printf("1. %d, 2. %d, 3. %d",a,c,b);
        }
    }
    else if(c<=b&&c<=a)
    {
        if(a<=b)
        {
            printf("1. %d, 2. %d, 3.%d",c,a,b);
        }
        else
        {
            printf("1. %d, 2. %d, 3. %d",c,b,a);
        }
    }
    else
    {
        if(b<=a)
        {
            printf("1. %d, 2. %d, 3. %d",b,a,c);
        }
        else
        {
            printf("1. %d, 2. %d, 3. %d",b,c,a);
        }
    }
    return 0;
}