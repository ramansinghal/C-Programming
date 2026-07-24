//Eg - check if a number is positive , even or odd
#include<stdio.h>
int main() {
    int number;
    printf("enter number : ");
    scanf("%d",&number);

    if(number >= 0) {
        printf("positive number\n");
        if(number % 2 == 0) {
            printf("even number\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}


//Eg - student is elegible for a scholorship
#include<stdio.h>
int main() {
    int attendance , marks;
    printf("enter attendance : ");
    scanf("%d",&attendance);
    printf("enter marks : ");
    scanf("%d",&marks);
    if(marks >= 75) {
        if(attendance >= 80) {
            printf("elegible for scholorship\n");
        } 
        else {
            printf("person is not elegible for scholorship\nmarks & attendance low");
        
        }
        
    }
    return 0;
}