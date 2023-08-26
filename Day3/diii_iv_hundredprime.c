#include<stdio.h>
int main()
{
    int count, c=0;
    for(int n=2;c<=99;n++)
    {
        count=0;
        for(int i=2;i<=n/2;i++)//2/2=1 hojayega false hojayega toh ye loop me ayega hi nahi and ayega nhi toh count ki value nhi bdegi , mtlb count 0 hi rehna chahiye taki woh prime bane.
        {
            if(n%i==0)
            count++;
        }
        if(count == 0)
        {
            printf(" %d",n);
            c++;
        }
    }
    return 0;
}