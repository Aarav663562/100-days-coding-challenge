/*Q8: Write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main() {
    int n, i=1 , sum = 0;

    printf("enter a positive integer:\n");
    scanf("%d", &n);

    printf("Numbers:");
    while (i <= n) {
        printf("%d" , i);
            sum = sum + i;
            i++;
    }        
            printf("\nsum = %d\n" , sum);
            return 0;
    }






