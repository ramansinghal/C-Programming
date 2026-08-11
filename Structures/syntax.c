#include<stdio.h>
#include<string.h>
//user defined
struct student{
    char name[100];
    float cgpa;
    int roll_no;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Rahul singh");
    s1.cgpa = 8.5;
    s1.roll_no = 45;

    struct student s2;
    strcpy(s2.name,"mridul sharma");
    s2.cgpa = 9;
    s2.roll_no = 42;

    printf("info of s1 : \n");
    printf("name is %s\n",s1.name);
    printf("cgpa is %.1f\n",s1.cgpa);
    printf("roll number is %d\n",s1.roll_no);

    printf("info for s2 : \n");
    printf("name is %s\n",s2.name);
    printf("cgpa is %.1f\n",s2.cgpa);
    printf("roll number is %d\n",s2.roll_no);

    return 0;
}
