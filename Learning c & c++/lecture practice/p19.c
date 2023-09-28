#include <stdio.h>
int main()
{
    int n, i;
    printf("Number of elements you want to enter :");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to check if it exists in this array or not :");
    int m;
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            printf("%d exists in this array at position %d from starting.\n", m, i + 1);
            continue;
        }
        else if (i == n - 1)
        {
            printf("%d does not exist in this array.", m);
        }
    }
    return 0;
}
