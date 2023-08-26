#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : \n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d",a);
        a=-1;
    }
    else
    {
        printf("%d",a);
    }
    return 0;
}