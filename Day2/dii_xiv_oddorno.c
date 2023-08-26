#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter a number : \n");
    int a;
    scanf("%d",&a);
    for(int i=a;i>=0;i-=2)//i=i-2 hai 1-=2
    {
        a=i;
    }
    if(a == 0)
    {
        printf("the number is even : \n");
    }
    else
    {
        printf("the number is not even ");
    }
    return 0;
}