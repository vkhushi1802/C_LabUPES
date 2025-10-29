//Write a program to check and print prime no within a given range. 

#include <stdio.h>
#include <math.h>

int ISPRIME(int num){
    if(num<=1) return 0;
    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int lower;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &lower);

    int upper;
    printf("Enter the upper limit of the range: ");
    scanf("%d", &upper);

    for(int i=lower; i<=upper; i++){
        if(ISPRIME(i)){
            printf("%d ", i);
        }
        else{
            continue;
        }
    }

    return 0;
}