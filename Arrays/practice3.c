//write a function to reverse an array.
#include<stdio.h>
void ReverseArray(int arr[],int n);
void printArray(int arr[],int n);

void ReverseArray(int arr[],int n){
    for(int i=0 ; i<n/2 ; i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}

void printArray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter n numbers : ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    ReverseArray(arr,n);
    printArray(arr,n);

    return 0;

}

