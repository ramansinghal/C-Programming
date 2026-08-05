//write a program in c to find the maximum number between 2 numbers using a pointer.
#include<stdio.h>
int main(){
    int a , b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);

    int *ptr = &a;
    int *_ptr = &b;

    if(*ptr > *_ptr){
        printf("a is greatest");
    }
    else if(*_ptr > *ptr){
        printf("b is greatest");
    }
    else{
        printf("both are equal");
    }
    return 0;
}