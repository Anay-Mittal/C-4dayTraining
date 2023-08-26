#include<stdio.h>
int main()
{
    int a;
    for(int i=1;i<=5;i++)
    {
        a=i; // Initialize a for each row
        for(int k=i;k<5;k++) // Print spaces before the numbers
        {
            printf("    "); // Four spaces for each missing number
        }
        for(int j=1;j<=i*2-1;j++) // Print the numbers
        {
            printf("%d", a);
            a = (a == 9) ? 0 : a + 1; // Reset to 0 after 9
        }
        printf("\n");
    }
    return 0;
}
