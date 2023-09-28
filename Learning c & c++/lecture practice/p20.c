#include <stdio.h>
int main()
{
    int i = 0, j = 0, temp = 0;
    int arr[] = {5, 4, 1, 2, 10, 7};
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}