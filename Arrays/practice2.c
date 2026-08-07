//write a function to count the number of odd numbers in an array.
#include<stdio.h>
void countOdd(int arr[],int n);

void countOdd(int arr[],int n){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
        
    }
    printf("count of odd number is %d\n",count);
    printf("\n");
}

int main(){
    int arr[6];
    printf("enter 6 numbers : ");
    for(int i=0 ; i<6 ; i++){
        scanf("%d",&arr[i]);
    }
    countOdd(arr,6);
}