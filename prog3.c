
// Write a program to add two numbers.

// #include <stdio.h>
// int main(){
//     int a,b,s;
//     a=1;
//     b=2;
//     s= a+b;
//     printf("Sum =%d", s);
//     return 0;

// }


// User input

#include <stdio.h>
int main(){
    int a,b,s;
    printf("Enter first no.");
    scanf("%d", &a);
    printf("Enter second no.");
    scanf("%d", &b);
    s= a+b;
    printf("Sum of %d and %d is %d" , a,b,s);

    return 0;
}
