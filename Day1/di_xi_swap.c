#include<stdio.h>
int main()
{
    printf("enter the numbers: \n");
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("\n value of a = %d , b = %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n now, the numbers after swapping are : \n a= %d, b= %d",a,b);
    return 0;
}