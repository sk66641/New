#include <stdio.h>
void printArray(int arr[], int size) {
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
int main() {
int myArray[] = {1, 2, 3, 4, 5};
printf("%d\n",sizeof(myArray));
printf("%d\n", sizeof(myArray[0]));
int length = sizeof(myArray) / sizeof(myArray[0]);

printArray(myArray, 4);
return 0;
}