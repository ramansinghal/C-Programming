#include<stdio.h>
struct student{
    char name[100];
    int roll_no;
    float cgpa;
};

//function declaration/prototype
void printInfo(struct student s1);

//function defination
void printInfo(struct student s1){
    printf("name is %s\n",s1.name);
    printf("roll number is %d\n",s1.roll_no);
    printf("cgpa is %.2f\n",s1.cgpa);
}

//function call
int main(){
    struct student s1 = {"megha verma",5,8.5};
    struct student s2 = {"kajal singh",7,8.8};
    printInfo(s1);
    printInfo(s2);
    return 0;
}