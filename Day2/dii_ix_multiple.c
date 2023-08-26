#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter two numbers: \n");
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("%d is a multiple of %d",a,b);
    }
    else
    {
        printf("\n it is not a multiple");
    }
    return 0;
}