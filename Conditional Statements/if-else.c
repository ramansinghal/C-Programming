#include<stdio.h>
int main() {
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    if(age >= 18) {
        printf("adult\n");
        printf("can vote");
        printf("can drive");
    }
    else {
        printf("not an adult\n");
        printf("cannot vote\n");
        printf("cannot drive\n");
    }
    return 0;
}