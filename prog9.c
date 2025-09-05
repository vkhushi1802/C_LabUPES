// WAP to show the use of relational operator.


#include <stdio.h>
int main(){
    int x,y;
    printf("Enter value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Expression: x>y value= %d \n", x>y);
    printf("Expression: x<y value= %d \n", x<y);
    printf("Expression: x>=y value= %d \n", x>=y);
    printf("Expression: x<=y value= %d \n", x<=y);
    printf("Expression: x==y value= %d \n", x==y);
    printf("Expression: x!=y value= %d \n", x!=y);

    return 0;
    
}
