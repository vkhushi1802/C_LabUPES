// WAP to calculate area and perimeter of rectangle based on its length and breadth
#include <stdio.h>
int main(){
    int l,b,area,per;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);
    area = l*b;
    per = 2*(l+b);

    printf("Area =%d, Perimeter= %d", area, per);
    return 0;

}