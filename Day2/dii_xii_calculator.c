#include<stdio.h>
int main()
{
    printf("enter any character : \n *,+,-,/ \n");
    char a;
    scanf("%c",&a);
    int b,c,res;
    printf("enter any 2 numbers: \n ");
    scanf("%d%d",&b,&c);
    switch(a)
    {
        case '*':
        res=b*c;
        printf("the product of %d and %d is \n %d",b,c,res);
        return 0;
        case '-':
        res=b-c;
        printf("the subtraction of %d and %d is \n %d",b,c,res);
        return 0;
        case '+':
        res=b+c;
        printf("the addition of %d and %d is \n %d",b,c,res);
        return 0;
        case '/':
        res=b/c;
        printf("the division of %d and %d is \n %d",b,c,res);
    }
    return 0;
}