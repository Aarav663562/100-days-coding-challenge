/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.*/
#include<stdio.h>
int main() {
    int integer, even, odd;
    printf("enter an integer:");
    scanf("%d",&integer);
    if (integer%2 == 0) {
        printf("the number is even");
    }
    else {
        printf("the number is odd");
    }
    return 0;

    }


