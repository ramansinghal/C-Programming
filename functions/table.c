#include<stdio.h>
//function declaration
void printTable(int n);

//function call
int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printTable(n);      //argument/actual parameter
    return 0;
}

//function defination 
void printTable(int n) {            //parameter/formal parameter
    for(int i=1 ; i<=10 ; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}