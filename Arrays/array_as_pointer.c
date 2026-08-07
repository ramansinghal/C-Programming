#include<stdio.h>
int main(){
    int aadhar[5];
    int *ptr = &aadhar[0];   //&aadhar[0] == aadhar
    
    //input
    for(int i=0 ; i<5 ; i++){
        printf("%d index\t",i);
        scanf("%d",(ptr+i));   //(ptr+i) == &aadhar[i]
    }
    
    //output
    for(int i=0 ; i<5 ; i++){
        printf("%d index = %d\n",i,*(ptr+i));   //*(ptr+i) == aadhar[i]
    }
    return 0;
}