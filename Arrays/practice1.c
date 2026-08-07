//write a program to enter price of 3 items & print their final cost with gst.

#include<stdio.h>
int main(){
    int prices[3];
    printf("enter prices of 3 items");
    scanf("%d",&prices[0]);
    scanf("%d",&prices[1]);
    scanf("%d",&prices[2]);
    printf("price 1 = %.2f\n",prices[0] + 0.18 * prices[0]);
    printf("price 2 = %.2f\n",prices[1] + 0.18 * prices[1]);
    printf("price 3 = %.2f\n",prices[2] + 0.18 * prices[2]);
    return 0;
}