#include<stdio.h>
#include<string.h>
int main()
{
    char *mon[13]={"blank","January","February","March","April","May","June","July","August","September","October","November","December"};
    int d,m,y;
    printf("enter the month date  and year :\n");
    scanf("%d%d%d",&m,&d,&y);
    
    for(int i=1;i<=12;i++)
    {
        if(m==i)//checks i value instead of index cuz index me char n inpt in int.
        {
            
            printf("%s %d %d",mon[i],d,y);
            break;
        }
    }
    
    return 0;
}