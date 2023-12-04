#include <stdio.h>
int main()
{
    int n, arr[4];
    printf("n");
    scanf("%d", &n);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter");
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[0]);
    printf("%d", arr[1]);
    printf("%d", arr[2]);
    printf("%d", arr[3]);
    int target, done;
    printf("Target");
    scanf("%d", &target);
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (target == arr[i] + arr[j])

            {
                done = 1;
                printf("[%d ,%d]", i, j);
                break;
            }
        }
        if (done == 1)

        {
            break;
        }
    }
    return 0;
}