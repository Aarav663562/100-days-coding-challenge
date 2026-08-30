/*Q7: Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter a two numbers:\n");
    scanf("%d,%d", &a,&b);

    //swap logic without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping %d, %d\n ", a,b);
    return 0;
}