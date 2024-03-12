// Write a program to calculate Fibonacci Series up to n numbers

#include<stdio.h>

int main(){

    int t1 = 0;
    int t2 = 1;
    int next_term =0;
    int n;

    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series : %d, %d, ", t1, t2);
    next_term = t1 + t2;

    while(next_term <= n){
        printf("%d, ", next_term);
        t1= t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    return 0;
    
}