#include <stdio.h>
#include <string.h>

int main() {
    char hexadecimalNumber[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimalNumber);
    long long binaryNumber = 0;
    int length = strlen(hexadecimalNumber);
    for (int i = 0; i < length; ++i) {
        int digit;
        if (hexadecimalNumber[i] >= '0' && hexadecimalNumber[i] <= '9') {
            digit = hexadecimalNumber[i] - '0';
        } else if (hexadecimalNumber[i] >= 'A' && hexadecimalNumber[i] <= 'F') {
            digit = hexadecimalNumber[i] - 'A' + 10;
        } else if (hexadecimalNumber[i] >= 'a' && hexadecimalNumber[i] <= 'f') {
            digit = hexadecimalNumber[i] - 'a' + 10;
        } else {
            printf("Invalid hexadecimal number.\n");
            return 1;
        }
        binaryNumber = binaryNumber * 16 + digit;
    }

    printf("Binary number: %lld\n", binaryNumber);
    return 0;
}
