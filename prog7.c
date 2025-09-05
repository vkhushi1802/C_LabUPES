// WAP to input no. of days and calculate it in year:month:days;

#include <stdio.h>
int main(){
    int days,year,mon,day;
    printf("Enter no. of days: ");
    scanf("%d", &days);

    year = days/360;
    mon = (days % 360)/ 30;
    day = days - ((year*360) + (mon*30));

    printf("%d:%d:%d", year,mon,day );
    return 0;

}