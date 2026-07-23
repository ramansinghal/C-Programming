#include<stdio.h>
#include<math.h>
int main() {
    int x,y;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    int power = pow(x,y);
    printf("x raised to the power y is %d",power);
    return 0;
}