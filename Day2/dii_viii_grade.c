#include<stdio.h>
int main()
{
    printf("enter your grade :\n");
    float a;
    scanf("%f",&a);
    if(a<5.0)
    {
        printf("fail");
    }
    else if(a>=5.0&&a<5.5)
    {
        printf("Third Division");
    }
    else if(a>=5.5&&a<6.5)
    {
        printf("Second division");
    }
    else if(a>=6.5&&a<7.5)
    {
        printf("first division");
    }
    else
    {
        printf("Higher Division");
    }
    return 0;
}