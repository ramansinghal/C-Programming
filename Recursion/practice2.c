//write a function to find square root of a number.
#include<stdio.h>
#include<math.h>
float SquareRoot(float num);

float SquareRoot(float num){
    return sqrt(num);
}

int main(){
    float num;
    printf("enter num : ");
    scanf("%f",&num);
    printf("square root of %f is %.2f",num,SquareRoot(num));
    return 0;
}