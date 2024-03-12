//Write a program to calculate a Factorial of a number

#include<stdio.h>

int main(){
    int i;
    int number;
    int factorial =1;

    printf("Enter the numbers : ");
    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is = %d", number, factorial);

    return 0;
}