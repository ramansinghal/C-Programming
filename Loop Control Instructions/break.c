#include<stdio.h>
int main() {
    for(int i=0 ; i<= 5 ; i++) {
        if(i==3) {
            break;
        }
        printf("%d\n",i);
    }
    printf("END");
    return 0;
}


//keep taking numbers as input from user unitl user enters an odd number
#include<stdio.h>
int main() {
    int n;
    do{
        printf("enter n : ");
        scanf("%d",&n);

        if(n % 2 != 0){
            break;
        }
    } while(1);
    printf("Thankyou");
    return 0;
}
   