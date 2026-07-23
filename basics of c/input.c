#include<stdio.h>
int main() {
    int age;
    printf("enter age : ");                
    scanf("%d",&age);                   //input of age
    printf("age is %d\n",age);
    
    float cgpa;
    printf("enter cgpa : ");
    scanf("%f",&cgpa);                 //input of cgpa
    printf("cgpa is %.2f\n",cgpa);

    char ch;
    printf("enter ch  : ");
    scanf(" %c",&ch);
    printf("ch is %c\n",ch);        //input of star

    return 0;
}


