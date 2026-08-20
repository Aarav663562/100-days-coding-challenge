/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
int main()
{
    int a,b,sum,diff,prod;
    float quot;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = (float)a / b;
    printf("sum of %d and %d is %d\n",a,b,sum);
    printf("difference of %d and %d is %d\n",a,b,diff);
    printf("product of %d and %d is %d\n",a,b,prod);
    printf("quotient of %d and %d is %.2f\n",a,b,quot);
    return 0;
}
