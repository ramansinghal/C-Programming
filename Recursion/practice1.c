//write a function to find sum of digits of a number.
#include<stdio.h>
int sumofdigits(int num);

int sumofdigits(int num){
    int sum = 0;
    while(num != 0){
        sum = sum + (num%10);  //gives last digit
        num = num/10;          //removes last digit
    }
    return sum;
}

int main(){
    int num;
    printf("enter num : ");
    scanf("%d",&num);
    printf("sum of digits of %d is %d",num,sumofdigits(num));
    return 0;
}