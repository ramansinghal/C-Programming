//print sum of first n natural numbers using for-loop
#include<stdio.h>
int main() {
    int n;
    printf("enter number(n) : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=0 ; i<=n ; i++) {
        sum += i;
        
    }
    printf("sum is %d",sum);
    return 0;
}


//print sum of first n natural numbers using while-loop
#include<stdio.h>
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
    int i = 0;
    int sum = 0;
    while(i <= n){
        sum += i;
        i++;
    }
    printf("sum is %d\n",sum);
    return 0;
}


//print table of a number input by the user using for-loop
#include<stdio.h>
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
    for(int i=1 ; i<=10 ; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}


//print table of a number input by the user using while-loop
#include<stdio.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}


//print all odd numbers from 5-50
#include<stdio.h>
int main() {
    for(int i=5 ; i<=50 ; i++) {
        if(i % 2 != 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}


//find factorial of a number n
#include<stdio.h>
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
    int fact = 1;
    for(int i=1 ; i<=n ; i++) {
        fact *= i;
    }
    printf("fact of %d is %d",n,fact);
    return 0;
}


//print reverse of a table n
#include<stdio.h>
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
    for(int i=10 ; i>=1 ; i--){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}


//calculate sum of all numbers between 5 & 50
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=5 ; i<=50 ; i++) {
        sum += i;
    }
    printf("sum is %d",sum);
    return 0;
}