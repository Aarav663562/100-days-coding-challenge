/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>

int main() {
    float radius, area, circumference;
    printf("Enter the radius of circle:\n");
    scanf("%f" , &radius);
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius ;
    printf("circumference of circle is %f\n",circumference);
    printf("area of circle is %f\n" ,area);
    return 0;
}
    
