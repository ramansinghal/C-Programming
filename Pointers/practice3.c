//write a function to calculate the sum , product & average of 2 numbers.
#include<stdio.h>
void DoWork(int a,int b,int *sum,int *prod,int *avg);

int main(){
    int a = 3,b = 5;
    int sum,prod,avg;
    DoWork(a,b,&sum,&prod,&avg);
    printf("sum = %d,prod = %d,average = %d\n",sum,prod,avg);
    return 0;
}

void DoWork(int a,int b,int *sum,int *prod,int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}