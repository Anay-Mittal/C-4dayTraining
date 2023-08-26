#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            if(i==4||i==2)
            {
                printf("0");
            }
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}