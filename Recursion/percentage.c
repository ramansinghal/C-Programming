//write a function to calculate percentage of a student from marks in science , maths & sanskrit.

#include<stdio.h>
float percentage(int science,int math,int sanskrit);

int main(){
    printf("percentage is %.2f",percentage(90,91,87));
    return 0;
}

float percentage(int science,int math,int sanskrit){
    return((science + math + sanskrit)/3.0);
}