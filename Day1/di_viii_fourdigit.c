#include<stdio.h>
#include<math.h>
int main()
{
    int tho,hun,ten,one,a;
    printf("enter the number :\n");
    scanf("%d",&a);
    tho=a/1000;
    hun=(a%1000)/100;
    ten=(a%10)/10;
    one=a%10;
    printf("%d thousands, %d hundreds, %d tens, %d ones",tho,hun,ten,one);
    return 0;
}