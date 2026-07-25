#include<stdio.h>
int main() {
    for(int i=1 ; i<=3 ; i++) {
        for(int j=1 ; j<=2 ; j++) {
            printf("i=%d , j=%d\n",i,j);
        }
    }
    return 0;`1
}



//print the pattern using nested-loop
*****
*****
*****
*****
#include<stdio.h>
int main() {
    for(int i=1 ; i<=4 ; i++) {
        for(int j=1 ; j<=5 ; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
