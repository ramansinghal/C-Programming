#include<stdio.h>
int sum(int a,int b);

int main(){
    int a,b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("sum = %d\n",sum(a,b));

    int x,y;
    printf("enter x : ");
    scanf("%d",&x);
    printf("enter y : ");
    scanf("%d",&y);
    printf("sum = %d\n",sum(x,y));
    return 0;
    
}

int sum(int a,int b) {
    return a+b;
}