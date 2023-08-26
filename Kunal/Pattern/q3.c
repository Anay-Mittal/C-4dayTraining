#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)//5 tak row print krega
    {
        for(int j=5;j>=i;j--)//5>=1 true, toh 5 col print krne ke bad i=2 hoga toh 4 krega n etc.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}