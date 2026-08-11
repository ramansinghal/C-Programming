#include<stdio.h>
#include<string.h>
typedef struct ComputerScienceEngineering{
    char name[100];
    int roll_no;
    float cgpa;
} CSE ;

int main(){
    CSE s1;
    strcpy(s1.name,"Aman jindal");
    s1.roll_no = 67;
    s1.cgpa = 7.8;

    printf("name is %s\nroll number is %d\ncgpa is %.2f\n",s1.name,s1.roll_no,s1.cgpa);

    return 0;
}