//write a program to remove blank spaces in a string.
#include<stdio.h>
int main(){
    char str[100];
    printf("enter string : ");
    gets(str);

    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == ' '){
            for(int j = i ; str[j] != '\0' ; j++){
                str[j] = str[j+1];
            }
            i--;
        }
    }
    puts(str);
    return 0;
}