#include<stdio.h>
#include<string.h>
int main()
{//2d array uske size ke liye liya hai ya phir pointer use kro aur size mt mention kro
    char *a[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("enter any number between 1-12 : ");
    int b;
    scanf("%d",&b);
    if(b<1||b>12)
    {
        printf("\n error");
        return 0;
    }
    for(int i=1;i<12;i++)
    {
        if(b==i)
        {
            printf("\n%s",a[i-1]);//i ki index 1 par hai jo feb hai but jan chahiye if we press 1 so thats why iondex ko 0 krne ke liye -1
            break;
        }
    }
    return 0;
}