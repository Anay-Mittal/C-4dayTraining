#include<stdio.h>
int main()
{
    printf("enter the number of elements you want : \n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter the elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the array in normal order : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n the array in reverse order : \n");
    int i=n-1;
    for(;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}