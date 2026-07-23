//case 1 integers (%d)
//case 2 float (%f)
//case 3 char (%c)

#include<stdio.h>
int main() {
    int age = 22;
    printf("age is %d\n",age);             //case 1
    float pi = 3.14;
    printf("pi is %.2f\n",pi);             //case 2
    char star = '*';
    printf("star is %c\n",star);           //case 3
    return 0;
}

