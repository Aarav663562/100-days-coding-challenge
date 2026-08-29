/*Q5 Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main() {
    float celcius, farenhite;
    printf("Enter a temperature in celcius:\n");
    scanf("%f", &celcius);
    farenhite = (celcius * 9.0/5.0) + 32;
    printf("celcius in farenheit is %f\n", farenhite);
    return 0;
}