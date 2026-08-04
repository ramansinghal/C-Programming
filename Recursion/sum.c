//sum of 1st n natural numbers

#include<stdio.h>
int sum(int n);

int main(){
    printf("sum is %d\n",sum(5));
    printf("sum is %d\n",sum(10));
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}