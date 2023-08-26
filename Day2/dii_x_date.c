#include<stdio.h>
int main()
{
    printf ("enter the day, month and year : \n");
    int day,month,year;
    scanf("%d%d%d",&day,&month,&year);
    printf("Date following : %d:",day+1);
    printf(" %d :%d",month,year);
    return 0;
}