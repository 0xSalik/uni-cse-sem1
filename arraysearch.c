#include <stdio.h>

int searchArray(int arr[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, i, key, result;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = searchArray(arr, n, key);

    if(result != -1) {
        printf("Element found at position %d\n", result + 1);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
