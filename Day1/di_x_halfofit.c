#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter the integer : \n");
    float a,b;
    float result;
    scanf("%f%f",&a,&b);
    result = fmod(b,a);
    if(result==0)
    {
        float half=50.0000;
        printf("%f is %4.2f %% of %f",a,half,b);
    }
    else
    {
        printf("the number is not half of it ");
    }
    return 0;
}