#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)//5 rows
    {
        for(int j=1;j<=i;j++)//jab tak i satisfy nahi hota tab tak us me column add hoga
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}