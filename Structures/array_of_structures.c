#include<stdio.h>
#include<string.h>
//user defined
struct student{
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student ECE[5];

    strcpy(ECE[0].name,"Raghav Singhal");
    ECE[0].roll_no = 1;
    ECE[0].cgpa = 8.5;

    strcpy(ECE[1].name,"Keshav Singhal");
    ECE[1].roll_no = 2;
    ECE[0].cgpa = 9;

    strcpy(ECE[2].name,"Ritika Sharma");
    ECE[1].roll_no = 3;
    ECE[1].cgpa = 7.6;

    strcpy(ECE[3].name,"Manvi Goel");
    ECE[3].roll_no = 4;
    ECE[3].cgpa = 8;

    printf("name is %s\nroll number is %d\ncgpa is %.2f\n",ECE[1].name,ECE[1].roll_no,ECE[1].cgpa);

    return 0;

    
}