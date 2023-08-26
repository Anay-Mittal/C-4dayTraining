#include<stdio.h>
#include<math.h>
int main()
{
    printf("program to display the area of the circle : \n");
    double area,r,pi=3.14;
    printf("enter the radius :\n");
    scanf("%lf",&r);
    area= pi*pow(r,2);
    printf("\n area = %lf",area);
    return 0;
}