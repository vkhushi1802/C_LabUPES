// Q- Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory address change and the effects on data access.

#include <stdio.h>
int main(){

    int a=1;
    float b=1.5;
    char c= 'm';

    int *in=&a;
    float *flo=&b;
    char *ch=&c;

    printf("%p %p %p\n", in, flo, ch);


    in++;
    flo++;
    ch++;

    printf("%p %p %p\n", in, flo, ch);

    in--;
    flo--;
    ch--;

    printf("%p %p %p", in, flo, ch);

    return 0;

}