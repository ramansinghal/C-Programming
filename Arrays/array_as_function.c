#include<stdio.h>
//function declaration
void printNumbers(int arr[],int n);      //int arr[] == int *arr

//function defination
void printNumbers(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//function call
int main(){
    int arr[6];
    printf("enter 6 numbers : ");
    for(int i=0 ; i<6 ; i++){
        scanf("%d",&arr[i]);
    }
    printNumbers(arr,6);
    return 0;
}