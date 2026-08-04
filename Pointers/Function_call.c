//call by value
#include<stdio.h>
void square(int n);

int main(){
    int n = 4;
    square(n);
    printf("n = %d\n",n);
    return 0;
}

void square(int n){
    n = n * n;
    printf("square = %d\n",n);

}


//call by reference
#include<stdio.h>
void square(int *n);

int main(){
    int n = 4;
    square(&n);
    printf("n = %d\n",n);
    return 0;
}

void square(int *n){
    *n = (*n) * (*n);
    printf("square = %d\n",*n);
}