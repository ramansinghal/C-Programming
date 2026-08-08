//create a 2D array storing the table of 2 & 3.
#include<stdio.h>
int main(){
    int Table[2][10];
    for(int i=0 ; i<10 ; i++){
        Table[0][i] = 2*(i+1);
    }
    for(int i=0 ; i<10 ; i++){
        Table[1][i] = 3*(i+1);
    }

    for(int i=0 ; i<10 ; i++){
        printf("%d\t",Table[0][i]);
    }
    printf("\n");
    for(int i=0 ; i<10 ; i++){
        printf("%d\t",Table[1][i]);
    }
    return 0;
}