//write a program to print the largest number in an array.
#include<stdio.h>
int main(){
    int array[10];
    printf("enter 10 numbers : \n");
    for(int i=0 ; i<10 ; i++){
        scanf("%d",&array[i]);
    }

    int max = array[0];
    for(int i=1 ; i<10 ; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("Largest number is %d\n",max);
    return 0;
}