#include<stdio.h>
int main()
{
    printf("enter the numbers :\n");
    int a,b;
    scanf("%d%d",&a,&b);
    
    if(a%1!=0)
    {
        printf("error");
        return 0;
    }
    if (b%1!=0)
    {
        printf("erorr");
        return 0;
    }
    
    if(a<b)
    {
        printf("up");
    }
    else if(b<a)
    {
        printf("down");
    }
    else
    {
        printf("equal");
    }
    return 0;
}