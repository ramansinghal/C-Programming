#include<stdio.h>
struct student{
    char name[100];
    int roll_no;
    float cgpa;

};

int main(){
    struct student s1 = {"rahul",45,8.7};
    struct student *ptr = &s1;

    printf("name is %s\n",s1.name);         //rahul
    printf("name is %s\n",(*ptr).name);     //rahul
    printf("name is %s\n",ptr->name);       //rahul

    return 0;

}