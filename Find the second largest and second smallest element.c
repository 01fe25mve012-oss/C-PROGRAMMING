#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    int smallest, secondSmallest;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = secondSmallest = INT_MAX;
    largest = secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        // For smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }

        // For largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX || secondLargest == INT_MIN) {
        printf("Second smallest or second largest element does not exist.\n");
    } else {
        printf("Second Smallest element: %d\n", secondSmallest);
        printf("Second Largest element: %d\n", secondLargest);
    }

    return 0;
}
