#include <stdio.h>

int main() {
    int n, i, search, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found in array\n");
    return 0;
}
