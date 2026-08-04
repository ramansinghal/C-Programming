//format specifier for pointers
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    
    //address
    printf("%u\n",&age); 
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

    //age
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
};


//pointer to pointer
#include<stdio.h>
int main(){
    float pie = 3.14;
    float *ptr = &pie;
    float **pptr = &ptr;
    
    int age = 22;
    int *ptr = &age;
    int **pptr = &ptr;

    char star = '*';
    char *ptr = &star;
    char **pptr = &ptr;

    return 0;
}

