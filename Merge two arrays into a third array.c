#include<stdio.h>
int main(){
    int arr1[50],arr2[50],arr3[100];
    int n1,n2,n3=0;
    printf("Enter  number of  elements in first array:");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
        arr3[n3++]=arr1[i];
    }
    printf("Enter  number of  elements in second array:");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
        arr3[n3++]=arr2[i];
    }
    printf("Merged array:\n");
    for( int i=0;i<n3;i++){
        printf("%d",arr3[i]);
    }
        return 0;
    
}