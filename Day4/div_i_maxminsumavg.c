#include<stdio.h>
int main()
{
    printf("enter the number of elements you want : \n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements : \n");
    for ( int i=0;i<n;i++ )
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int avg=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        avg=sum/n;
    }
    printf("\n the sum of the numbers is  : %d",sum);
    printf("\n the avg of the elements is : %d", avg);
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min =a[i];
        }
    }
    printf("\n max number is : \n %d",max);
    printf("\n min number : \n %d",min);
    return 0;
}
