#include<stdio.h>
int main()
{
    int k=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=k;j++)//1 thi k ki value then 3 then etc toh tabk tak usme column add krega
            printf("*");
            k=k+2;
        printf("\n");
    }
    return 0;
}