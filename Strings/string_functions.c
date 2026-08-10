//gets & puts
#include<stdio.h>
int main(){
    char name[100];
    gets(name);    //input (outdated & unsafe)
    puts(name);    //output
    return 0;
}


//fgets & puts
#include<stdio.h>
int main(){
    char name[100];
    fgets(name,100,stdin);  //input (safe to use)
    puts(name);             //output
    return 0;
}