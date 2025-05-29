// Input an integer array from the user and display the same.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int size;
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size < 1 || size > MAX_SIZE) {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Contents of the integer array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
