/*Write a Program to reverse the letters present in the given String. Do 
not use strrev() function.*/

#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
