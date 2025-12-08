#include <stdio.h>
#include <string.h>

int main() {

    char fname[20], lname[20];
    char full[50];     

    
    printf("Enter first name: ");
    scanf("%s", fname);

    printf("Enter last name: ");
    scanf("%s", lname);

    
    printf("\nFirst Name: %s\n", fname);
    printf("Last Name: %s\n", lname);

    // Store into another array
    strcpy(full, fname);      // copy first name
    strcat(full, " ");        // add space
    strcat(full, lname);      // add last name

    printf("\nFull Name (stored in another array): %s\n", full);

    return 0;
}
