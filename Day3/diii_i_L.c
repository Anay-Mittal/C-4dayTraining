#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int a =1;
        for(int k=i;k<=5;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            
            printf("%d",a);
            
            a=a+1;
        }
        printf("\n");
        
    }
    return 0;
}