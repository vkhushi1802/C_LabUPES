//WAP to compute the BMI of a person and print the value as per the range.

#include <stdio.h>
int main(){
    float w,h,bmi;
    printf("Enter weight: ");
    scanf("%f", &w);
    printf("Enter height: ");
    scanf("%f", &h);

    bmi = w/(h*h);
    printf("BMI = %.2f\n", bmi);

    if(bmi <15)
        printf("STARVATION");

    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("ANOREXIC");

    else if (bmi >=17.6 && bmi <= 18.5)
        printf("UNDERWEIGHT");

    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("IDEAL");

    else if (bmi >= 25 && bmi <= 29.9)
        printf("OVERWEIGHT");

    else 
        printf("OBESE");


    return 0;
}