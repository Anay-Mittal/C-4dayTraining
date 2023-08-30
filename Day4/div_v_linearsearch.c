#include<stdio.h>
int main()
{
    printf("enter the limit : \n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter the number to be found : \n");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("key found at index %d ", i);
            return 0;
        }
    }
    printf("Key not found");
}