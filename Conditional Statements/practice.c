//check if a student is passed or failed
#include<stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d",&marks);

    if(marks >= 0 && marks <= 30) {
        printf("fail\n");
    }
    else if(marks > 30 && marks <= 100) {
        printf("pass\n");
    }
    else {
        printf("wrong marks\n");
    }
    return 0;
}

//give grades to a student
#include<stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d",&marks);

    if(marks >= 30 && marks < 70) {
        printf("B Grade");
    }
    else if(marks >= 70 && marks < 90) {
        printf("A Grade");
    }
    else if(marks >= 90 && marks <= 100) {
        printf("A+ Grade");
    }
    else {
        printf("C Grade");
    }
    return 0;
}

//check if a character entered by user is uppercase or not
#include<stdio.h>
int main() {
    char ch;
    printf("character(ch) : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("uppercase\n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("lowercase\n");
    }
    else {
        printf("not a english character\n");
    }
    return 0;
}

//armstrong number
#include<stdio.h>
#include<math.h>
int main() {
    int num,originalnum,remainder,digits=0;
    int result = 0;

    printf("enter number : ");
    scanf("%d",&num);

    originalnum = num;

    while(originalnum != 0) {
        originalnum = originalnum/10;   //removes last digit
        digits++;                       //counts total no. of digits
    }

    originalnum = num;

    while(originalnum != 0) {
        remainder = originalnum % 10;   //returns last digit
        result = result + pow(remainder,digits);
        originalnum = originalnum/10;
    }
    
    if(result == num) {
        printf("%d is an Armstrong number",num);
    }
    else {
        printf("%d is not an Armstrong number",num);
    }
    return 0;

}


//write a program to determine whether a student has passed or failed.to pass a student requires a total of 40% 
and atleast 33% in each subject . assume there are 3 subjects and take the marks as input from the user.

#include<stdio.h>
int main(){
    int m1,m2,m3;
    printf("m1 = ");
    scanf("%d",&m1);
    printf("m2 = ");
    scanf("%d",&m2);
    printf("m3 = ");
    scanf("%d",&m3);
    
    float percentage = (m1+m2+m3)/3;
    printf("percentage = %.2f\n",percentage);

    if(percentage > 40 ){
        if(m1 > 33 && m2 > 33 && m3 > 33){
            printf("pass\n");
        }
        else{
        printf("fail\n");
    }
        }
    return 0;
}


//calculate income tax paid by an employee to the government 
#include<stdio.h>
int main(){
    int income;
    printf("enter income : ");
    scanf("%d",&income);
    printf("income = %d\n",income);

    if(income > 0 && income <= 250000){
        printf("tax = 0");
    }
    else if(income > 250000 && income <= 500000){
        printf("Tax = %.2f\n",0.05 * (income-250000));
    }
    else if(income > 500000 && income <= 1000000){
        printf("Tax = %.2f\n",0.05 * (500000-250000) + 0.2 * (income - 500000));
    }
    else {
        printf("Tax = %.2f\n",0.05 *(500000-250000) + 0.2 * (1000000-500000) + 0.3 * (income - 1000000));
    }
    return 0;

}


//write a program to check whether a year entered by the user is a leap year.
#include<stdio.h>
int main(){
    int year;
    printf("year = ");
    scanf("%d",&year);
    

    if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0) {
        printf("%d is a leap year",year);
    }
    else {
        printf("%d is not a leap year",year);
    }
}


