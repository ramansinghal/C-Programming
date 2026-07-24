//print helloworld 5 times
#include<stdio.h>
int main() {
    int i=1;
    do{
        printf("helloworld\n");
        i++;
    } while(i <= 5);
    return 0;
    }


//print numbers from 1-5
#include<stdio.h>
int main() {
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    } 
    while(i <= 5);
    return 0;
}


//print numbers from 5-1
#include<stdio.h>
int main() {
    int i=5;
    do{
        printf("%d\n",i);
        i--;
    } while(i >= 1);
    return 0;
}