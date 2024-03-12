/*
Write a program to check the input characters for uppercase, 
lowercase, number of digits and other characters. Display appropriate 
message.
*/

#include <stdio.h>

int main() {
    char input;
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, other_count = 0;

    printf("Enter a string: ");

    while ((input = getchar()) != '\n') {
        if (input >= 'A' && input <= 'Z') {
            uppercase_count++;
        } else if (input >= 'a' && input <= 'z') {
            lowercase_count++;
        } else if (input >= '0' && input <= '9') {
            digit_count++;
        } else {
            other_count++;
        }
    }

    printf("Uppercase characters: %d\n", uppercase_count);
    printf("Lowercase characters: %d\n", lowercase_count);
    printf("Digits: %d\n", digit_count);
    printf("Other characters: %d\n", other_count);

    return 0;
}
