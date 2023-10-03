#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

int main() {
    int binaryNumber;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    int decimalNumber = binaryToDecimal(binaryNumber);
    int octalNumber = decimalToOctal(decimalNumber);
    printf("Octal number: %d\n", octalNumber);
    return 0;
}
