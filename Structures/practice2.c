//create a structure to store complex numbers.(use arraow operator).
#include<stdio.h>
struct complex{
    int real;
    int img;
};

int main(){
    struct complex number1 = {2,7};
    struct complex *ptr = &number1;

    printf("real no is %d\n",ptr->real);
    printf("img no is %d\n",ptr->img);

    return 0;
}