// WAP to convert temo from celcius to fehrehiet

#include <stdio.h>
int main(){
    int temp,feh;
    printf("Enter temp in celcius: ");
    scanf("%d", &temp);

    feh = (temp*(9/5)) + 32;

    printf("Sum =%d", feh);
    return 0;

}