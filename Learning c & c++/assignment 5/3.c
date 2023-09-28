#include <stdio.h>
int main()
{
    int i, n, sum2 = 0;
    printf("Enter the value of 'n' :");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d distinct numbers taken from 0 to n:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum2 = sum2 + arr[i];
    }
    int sum1 = n * (n + 1) * 0.5;
    if (sum1 == sum2)
    {
        printf("Missing number is 0.");
    }
    else
    {
        printf("Missing number is %d.", sum1 - sum2);
    }
    return 0;
}
