#include<stdio.h>
int main()
{
    printf("enter the numbers :\n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\nnumbers before swapping were :\n a= %d , b= %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nnumbers after swapping are : \n a= %d , b= %d",a,b);
    return 0;
}