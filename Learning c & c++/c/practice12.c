// The use of non-constant expressions in case labels is not allowed in C.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Comparison Results:\n");

    switch (1) {
        case (num1 > num2 && num1 > num3):
            printf("%d is the largest number.\n", num1);
            break;
        case (num2 > num1 && num2 > num3):
            printf("%d is the largest number.\n", num2);
            break;
        case (num3 > num1 && num3 > num2):
            printf("%d is the largest number.\n", num3);
            break;
        default:
            printf("There is no distinct largest number; at least two numbers are equal.\n");
    }

    return 0;
}
