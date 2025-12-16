#include <stdio.h>

int main(){
    int arr[100],n,i,key,found=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        printf("Enter elements to be searched:");
        scanf("%d",&key);
        for(i=0;i<n;i++){
            if(arr[i]==key){
                printf("Element found at position at %d\n",i+1);
                found=1;
                break;
            }
        }
                if(!found){
                    printf("Element not found\n");
                }
                    return 0;
                
            
        
        
    
}