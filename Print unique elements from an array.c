// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n,count;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unique elements  in the array are:\n");
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                    count++;
        }
    }
    
    if(count==1) {
    printf("%d",arr[i]);
    }
    }

    return 0;
}