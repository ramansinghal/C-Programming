//write a program in c to print all the lestters in english alphabet using a pointer.
#include<stdio.h>
int main(){
    char ch = 'a';
    char *ptr = &ch;
    while(*ptr <= 'z'){
        printf("%c\t",*ptr);
        (*ptr)++;
    }
    return 0;
}