/*Q6: Write a program to swap two numbers using a third variable.*/
#include<stdio.h>
int main() {
    int a, b, c;
    printf("enter two numbers:\n");
    scanf("%d,%d", &a,&b);

    //swap logic
    c=a;
    a=b;
    b=c;
    printf("after swapping %d, %d\n", a,b);
    return 0;
}