#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)//row
    {
        for(int j = 1 ; j <=i; j++)//after j gets the val of 2 during first loop time which is 2<=1 it gets exit and prints new line and then i becomes 2 and then j becomes reset and j <=i which means 1<=2 then it prints new column till it satisafies i.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}