/*Q1: Write a program to input two numbers and display their sum.*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    c = a + b;
    printf("sum of %d and %d is %d",a,b,c);
    return 0;
}