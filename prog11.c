// WAP to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year%4 == 0 && year%100 !=0)
    printf("Leap year");

    else if(year%400 == 0 && year%100 == 0)
    printf("Leap year");

    else
    printf("Not a leap year");

    return 0;
    
}