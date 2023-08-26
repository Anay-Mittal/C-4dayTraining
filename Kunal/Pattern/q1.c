#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)//5 row print krega
    {
        for(int j=1;j<=5;j++)//jabtak 5 nhi hojata tb tk ek hi column me krta rhega and then jab hojayega tab new line then i=2 hoke new row bnega etc.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}