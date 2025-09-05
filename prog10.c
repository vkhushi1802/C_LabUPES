// WAP to check the given sides of a triangle are valid or not. If valid, do check if the triangle is Isosceles, Scalene, Equilateral.


#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of all three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a+b>c && a+c>b && b+c>a){
    printf("It is a valid triangle.\n");

    if (a == b || b==c || c==a){
        printf("ISOSCELES");
    }

    else if(a==b && b==c){
        printf("EQUILATERAL");
    }

    else {
        printf("SCALENE");
    }
}
    else{
        printf("Not Valid");
    }

    return 0;
    
}