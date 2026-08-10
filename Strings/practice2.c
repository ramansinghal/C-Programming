//make a program that input user's name & print its length.
#include<stdio.h>
void countlength(char arr[]);

void countlength(char arr[]){
    int count = 0;
    for(int i=0 ; arr[i]!='\0' ; i++){
        count++;
    }
    printf("count is %d\n",count);
    
}

int main(){
    char name[100];
    gets(name);
    countlength(name);
    
    return 0;
}