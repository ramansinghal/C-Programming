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