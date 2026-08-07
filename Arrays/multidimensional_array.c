#include<stdio.h>
int main(){
    int arr[2][3];    //int arr[2][3] = {{90,88,77},{89,76,65}};

    arr[0][0]=90;
    arr[0][1]=88;
    arr[0][2]=77;

    arr[1][0]=89;
    arr[1][1]=76;
    arr[1][2]=65;

    printf("%d\n",arr[0][0]);
    printf("%d\n",arr[0][1]);
    printf("%d\n",arr[0][2]);
    printf("%d\n",arr[1][0]);
    printf("%d\n",arr[1][1]);
    printf("%d\n",arr[1][2]);
}