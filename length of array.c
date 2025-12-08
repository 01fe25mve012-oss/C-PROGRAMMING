#include <stdio.h>

int main() {

    int a[] = {10, 20, 30, 40, 50};     // int array
    char b[] = "Hello";                 // char array (string)

    // find length of int array
    int int_length = sizeof(a) / sizeof(a[0]);

    // find length of char array
    int char_length = sizeof(b) / sizeof(b[0]);

    printf("Length of int array = %d\n", int_length);
    printf("Length of char array = %d\n", char_length);

    return 0;
}
