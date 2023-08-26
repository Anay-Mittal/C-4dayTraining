#include<stdio.h>
int main()
{
    int a;
    float sum=0.0;
    printf("enter the numbers: \n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum+=1.0/i;
    }
    printf("%f",sum);
    return 0;
}