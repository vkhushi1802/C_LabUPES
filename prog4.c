// Write a program to perform these operations 
// a+b+c , a-b+c , a*b , (a-b)*c
// NOTE- Take input for a,b &c

#include <stdio.h>
int main(){
    int a,b,c,o1,o2,o3;
    printf("Enter value of a,b,c:");
    scanf("%d %d %d" &a, &b, &c);

    o1= a+b+c;
    o2= a-b+c;
    o3= a*b;
    o4= (a-b)*c;
    printf("Value of a+b is %d, a-b+c is %d, a*b is %d, (a-b)*c is %d" , o1,o2,o3,o4);

    return 0;
    
}