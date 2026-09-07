/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include<stdio.h>
int main() {
    int integer, positive, negative, zero;
    printf("enter an integer:");
    scanf("%d", &integer);

    if (integer > 0) {
        printf("the integer is positive");
    }
    if (integer < 0) {
        printf("the number is nrgative");
    }
    else {
        printf("the number is zero");
    }
    return 0;



}