//WAP to check if two points are collinear (x1,x2,x3,y1,y2,y3)

#include <stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("Enter value of x1,x2,x3,y1,y2,y3: ");
    scanf("%f %f %f %f %f %f", &x1,&x2,&x3,&y1,&y2,&y3);

    if((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2))
    printf("collinear");

    else 
    printf("Not collinear");

    return 0;
}