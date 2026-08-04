//factorial of n

#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}

int fact(int n){
    if(n == 1){
        return 1;
    }
    return fact(n-1) * n;
}