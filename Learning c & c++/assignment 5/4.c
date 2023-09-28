#include <stdio.h>
int main()
{
    int n, i, j, temp = 0;
    float average = 0, sum = 0;
    printf("Number of elements you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        average = sum / n;
    }
    printf("Sum of all %d elements of the array:%f\n", n, sum);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Largest element in the array is: %d\n", arr[n - 1]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Smallest element in the array is: %d\n", arr[n - 1]);
    printf("Average of all %d elements of the array: %f", n, average);
    return 0;
}
