#include <stdio.h>

int main()
{
    printf("Enter the number of elements: \n");
    int n;
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int one = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one+=1;
        }
        else if (a[i] == 0)
        {
            zero+=1;
        }
    }

    printf("Number of 1s: %d\n", one);
    printf("Number of 0s: %d\n", zero);

    return 0;
}
