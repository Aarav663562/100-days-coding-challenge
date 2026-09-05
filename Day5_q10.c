/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include<stdio.h>
int main () {
    int totalseconds, hours, minutes, seconds;
    printf("enter time in seconds:");
    scanf("%d",&totalseconds);

    hours = totalseconds/3600;
    totalseconds = totalseconds%60;

    minutes = totalseconds/60;
    seconds = totalseconds%60;
    printf("time = %02d:%02d:%02d/n", hours,minutes,seconds);
    return 0;
}