#include<stdio.h>
#include<math.h>
int main()
{
    float si,p,r,t;
    printf("enter the principla, time and rate : \n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*r*t)/100;
    printf("simple interest = %f",si);
    return 0;
}