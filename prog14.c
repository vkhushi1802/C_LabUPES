//WAP to find day, if year and date is given:- on 1st january of that year. Acc to the gregorian calender, it was monday on the date 01/01/01;
#include <stdio.h>
int main(){
    int year, l=0 , days=0;
    int day_index;
    printf("Enter year: ");
    scanf("%d", &year);

    for(int y=1; y<year; y++){
        l = (year%4 == 0 && year%100 != 0) || (year%400 == 0);
        days += (l? 366: 365);
    }

    day_index = (days%7)+1;
    switch (day_index )
    {
        case 0:
        printf("1st Jan of year %d is Sunday. \n", year);
        break;

        case 1:
        printf("1st Jan of year %d is Monday. \n", year);
        break;

        case 2:
        printf("1st Jan of year %d is Tuesday. \n", year);
        break;

        case 3:
        printf("1st Jan of year %d is Wednesday. \n", year);
        break;

        case 4:
        printf("1st Jan of year %d is Thursday. \n", year);
        break;

        case 5:
        printf("1st Jan of year %d is Friday. \n", year);
        break;

        case 6:
        printf("1st Jan of year %d is Saturday. \n", year);
        break;
    }
    return 0;
    }