#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter the number : \n ");
    int a,hun,ten,one;
    scanf("%d",&a);
    hun=a/100;
    ten=(a%100)/10;
    one=a%10;
    printf("%d hundred, %d tens, %d ones",hun,ten,one);
    return 0;
}