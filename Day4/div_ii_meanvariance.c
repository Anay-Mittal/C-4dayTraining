#include<stdio.h>
#include<math.h>
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
    int sum=0;
    int mean=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
    printf("mean of the numbers is : \n %d",mean);
    printf("\nnow to find variance : \n");
    int dum1=0;
    int var=0;
    for(int i=0;i<n;i++)
    {
        int dum=a[i]-mean;
        dum1 += pow(dum,2);
    }
    var=dum1/n;
    printf("variance is : \n %d",var);
    double std=sqrt(var);
    printf("\n std deviation : \n %lf",std);
    return 0;
}