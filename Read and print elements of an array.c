#include <stdio.h>

int main() {
    int i,arr[200];
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
     printf("Enter the %d elements:\n");
    for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
    }
    printf("elements that you have entered\n");
     for(i=0;i<n;i++){
    printf("%d", &arr[i]);
     }
}