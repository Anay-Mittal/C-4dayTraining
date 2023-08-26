#include<stdio.h>
int main()
{
    int k=1;
    for(int i=1;i<=5;i++)
    {
        int a=1;
        for(int j=1;j<=k;j++)
        {
        printf("%d",a);
        a=a+1;
        }
        k=k+2;//k ko bahar kara hai kyuki woh andar baar baar badhate jata aur infinite loop krdeta
        printf("\n");
    }
    return 0;
}