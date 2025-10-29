// Q. Declare different types of pointers (int, float, char) and initialise them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include <stdio.h>
int main(){
    int a=1;
    float b=1.5;
    char c='m';

    int *in = &a;
    float *flo = &b;
    char *ch = &c;

    printf("address= %p, %p, %p\n", in,flo,ch);
    printf("values = %d, %f, %c", *in,*flo,*ch);

    return 0;
}