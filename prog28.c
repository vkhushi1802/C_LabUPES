#include <stdio.h>

void FIBO(int num){
   int a=0;
   int b=1;
   while(a<=num){
    printf("%d ", a);
    int next= a+b;
    a=b;
    b=next;
   }

}


int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    FIBO(num);

    return 0;
}

