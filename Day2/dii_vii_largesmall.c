#include<stdio.h>
int main()
{
    int a[5];
    printf("enter five numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max= a[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("largest = \n %d\nsmallest = \n %d",max,min);
    return 0;
}