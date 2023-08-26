#include<stdio.h>
int main()
{
    printf("enter the number :\n");
    int a;
    scanf("%d",&a);
    if(a<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("the number is positive");
    }
    return 0;
}