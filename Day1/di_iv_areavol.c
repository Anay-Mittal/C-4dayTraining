#include<stdio.h>
#include<math.h>
int main()
{
    double r,area,vol,pi=3.14;
    printf("enter the radius :\n");
    scanf("%lf",&r);
    area=4*pi*pow(r,2);
    vol= (4/3)*pi*pow(r,3);
    printf("area of sphere is : \n %lf \nand volume of sphere is : \n %lf",area,vol);
    return 0;
}