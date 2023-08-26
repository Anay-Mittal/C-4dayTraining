#include<stdio.h>
int main()
{
    printf("enter a number : \n");
    int a;
    scanf("%d",&a);
    int sum=0;
    printf("Series : ");
    for(int i=1;i<=a;i+=2)
    {
        printf("%d",i);
        sum = sum+i;
        if(i<a-1)
        {
            printf("+");
        }
    }
    printf("\n sum = %d",sum);
    return 0;
}