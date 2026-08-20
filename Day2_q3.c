/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("enter the length and breadth of rectangle: ");
    scanf("%f %f",&length,&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("area of rectangle is %.2f\n",area);
    printf("perimeter of rectangle is,%.2f\n",perimeter);
    return 0;
}





