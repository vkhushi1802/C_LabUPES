#include <stdio.h>
int fact(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int r;
    printf("Enter the value of r: ");
    scanf("%d", &r);

     int nfact= fact(n);
    int rfact = fact(r);
    int n_rfact = fact(n-r);

    int bc = nfact / (rfact*(n_rfact));

    printf("Binomial COefficient = %d", bc);

    return 0;


}