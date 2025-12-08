#include <stdio.h>
#include <string.h>

int main() {
    char first[30], last[30];
    char full[60];

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    printf("\nFirst name: %s\n", first);
    printf("Last name: %s\n", last);

    // Store in another array (full name)
    strcpy(full, first);   // copy first name
    strcat(full, " ");     // add space
    strcat(full, last);    // add last name

    printf("\nFull name stored in another array: %s\n", full);

    return 0;
}
