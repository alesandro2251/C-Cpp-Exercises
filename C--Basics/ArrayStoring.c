// Program to take values from the user and store them in an array.Print the elements stored in the array

#include <stdio.h>

int main() {
    int num_digits;
    printf_s("Enter the number of digits:\n");
    scanf_s("%d", &num_digits);
    int digits[num_digits];

    printf_s("Enter the digits (from 1 to 9):\n");

    for(int i = 0;i < num_digits ;i++){ // this fills the array
        scanf("%d\n", &digits[i]);
    }

    printf_s("This is the number:\n");

    for(int i = 0; i < num_digits;i++) { // this print the array
        printf("%d", digits[i]);
    }
    
    return 0;
}
