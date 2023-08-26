#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter the number : \n");
    int a,b,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b= pow(i,i);
        sum=sum+b;
    }
    printf("%d",sum);
}