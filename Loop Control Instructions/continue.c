// #include<stdio.h>
int main() {
    for(int i=0 ; i<=5 ; i++) {
        if(i == 3){
            continue;     //skip(move to next iteration)
        }
        printf("%d\n",i);
    }
    return 0;
}


//same code using while loop
#include<stdio.h>
int main() {
    int i=0;
    while(i<=5){
        if(i==3){
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;

}