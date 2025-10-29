#include <stdio.h>

int fact(int num){
    int result =1;
    for(int i=1; i<=num; i++){
        result *= i;
    }

    return result;
}
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int r;
    printf("Enter value of r: ");
    scanf("%d", &r);

    int nfact= fact(n);
    int rfact = fact(r);
    int n_rfact = fact(n-r);

    int bc = nfact / (rfact*(n_rfact));

    printf("Binomial COefficient = %d", bc);

    return 0;
}