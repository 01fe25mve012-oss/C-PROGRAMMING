#include <stdio.h>

int main() {
    int arr[100], n;
    int isSorted = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is NOT sorted.\n");

    return 0;
}