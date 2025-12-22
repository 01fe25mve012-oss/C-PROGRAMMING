#include<stdio.h>
int main(){
    int n,arr[100];
    int sumEven=0,sumOdd=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    for(int i=0;i<n;i++){
        if(i%2==0)
            sumEven+=arr[i];
            else 
                 sumOdd+=arr[i];
            
        
    }
    
    printf("Sum of even index elements: %d\n",sumEven);
      printf("Sum of odd index elements :%d\n",sumOdd);
      return 0;
    
}