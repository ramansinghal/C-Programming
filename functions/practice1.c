//write a function that prints namaste if user is indian and bonjour if user is french

#include<stdio.h>
//function declaration
void namaste();
void bonjour();


//function call
int main() {
    char ch;
    printf("enter i for indian & f for french : ");
    scanf("%c",&ch);

    if(ch == 'i') {
        namaste();
    } 
    else if(ch == 'f') {
        bonjour();
    }
    
    else {
        printf("not a valid ch");
    }
    return 0;
    
}


//function defination
void namaste() {
    printf("namaste\n");
}
void bonjour() {
    printf("bonjour\n");
}