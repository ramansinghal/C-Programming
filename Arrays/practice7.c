//in an array of numbers , find how many times does a number x occour.
#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    
    printf("enter n numbers : ");
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("enter x :");
    scanf("%d",&x);

    int count = 0;

    for(int i=0 ; i<n ; i++){
        if(arr[i] == x){
            count++;
        }
    }
    printf("count of %d is %d\n",x,count);
    return 0;
}