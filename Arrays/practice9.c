//write a program to inset an element at the end of an array.
#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("enter n(n < 99): ");
    scanf("%d",&n);
    
    printf("enter n elements : ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int eleinsert;
    printf("enter element to be inserted : ");
    scanf("%d",&eleinsert);

    arr[n] = eleinsert;
    n++;

    printf("arr after inseting a element : \n");
    for(int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}