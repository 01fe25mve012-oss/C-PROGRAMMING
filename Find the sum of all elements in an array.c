#include <stdio.h>

int main() {
    int i,n;
    int sum =0;
   
    printf("Enter the number of elements:");
    scanf("%d",&n);
     int arr[i];
     printf("Enter the %d elements:\n");
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
         sum+=arr[i];
         printf("sum of array elements =%d \n",sum);
     }
    

    return 0;
}