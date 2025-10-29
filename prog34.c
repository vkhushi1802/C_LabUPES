// Q- Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>
void func(int *a, float *b, char *c){
    (*a)++;
    (*b)++;
    (*c)++;

    printf("%d %f %c", *a, *b, *c);
    }
int main(){
    int a = 1;
    float b= 1.5;
    char c='m';

    func(&a, &b, &c);

    return 0;
}