// WAP to calculate simple and compound interest for given P,R,T.

#include <stdio.h>
#include <math.h>
int main(){
    float P,R,T,SI,CI;
    printf("Enter value of P,R,T: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P*R*T)/100;
    CI = P* (pow((1+R/100),T))-P;


    printf("SI=%f, CI=%f ", SI, CI );
    return 0;

}