#include <stdio.h>

int main() {
    char octalNumber[100];
    printf("Enter an octal number: ");
    scanf("%s", octalNumber);
    int decimalNumber = 0, i = 0;
    while (octalNumber[i] != '\0') {
        decimalNumber = decimalNumber * 8 + (octalNumber[i] - '0');
        ++i;
    }
    
    char hexadecimalNumber[100];
    int j = 0;
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10)
            hexadecimalNumber[j++] = remainder + '0';
        else
            hexadecimalNumber[j++] = remainder + 'A' - 10;
        decimalNumber /= 16;
    }
    
    printf("Hexadecimal number: ");
    for (int k = j - 1; k >= 0; k--) {
        printf("%c", hexadecimalNumber[k]);
    }
    printf("\n");
    return 0;
}
