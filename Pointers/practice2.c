//swap 2 numbers a & b

call by value
#include<stdio.h>
void swap(int a,int b);

int main(){
    int a = 3,b = 5;
    swap(a,b);
    printf("a = %d & b = %d\n",a,b);
    return 0;
}

void swap(int a,int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n",a,b);

}


//call by reference
#include<stdio.h>
void swap(int *a,int *b);

int main(){
    int a = 3,b = 5;
    swap(&a,&b);
    printf("a = %d & b = %d\n",a,b);
    return 0;
}

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

