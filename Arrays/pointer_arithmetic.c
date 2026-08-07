#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    int _age = 33;
    int *_ptr = &_age;
    printf("%u\n",ptr);
    printf("%u\n",_ptr);
    printf("difference = %d\n",ptr-_ptr);
    _ptr = &age;
    printf("comparision = %d\n",ptr==_ptr);
}