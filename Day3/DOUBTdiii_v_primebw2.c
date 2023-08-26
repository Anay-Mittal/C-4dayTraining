/* #include<stdio.h>
int main()
{
    printf("enter 2 numbers : \n");
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<b;i++)
    {
        int count=1;
        {
            if(i<2)
            count =0;
            for(int n=2;n<=i/2;n++)
            {
                if(i%n==0)
                {
                    count =0;
                    break;
                }
            }
        }
        if(count  =1)
        printf(" %d",i);
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    printf("Enter 2 numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++) {
        int is_prime = 1; // Assume i is prime

        if (i <= 1) {
            is_prime = 0; // Numbers less than or equal to 1 are not prime
        } else {
            for (int n = 2; n <= i / 2; n++) {
                if (i % n == 0) {
                    is_prime = 0;
                    break; // Not prime, no need to check further
                }
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }

    return 0;
}
