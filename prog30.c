//WAP to implement linear search

#include <stdio.h>
int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[10];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key: ");
    scanf("%d", &key);

    int f=0, i=0;


    for(i=0; i<n; i++){
        if(arr[i] == key){
            f=1;
            break;
        }
    }
    

    if(f){
        printf("Key is at: %d", i);
    }
    else{
        printf("Key not found.");
    }
    

    return 0;

}