#include<stdio.h>
int main() {
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    age >= 18 ? printf("adult\ncan vote\n") : printf("not an adult\ncannot vote\n");

    return 0;
}