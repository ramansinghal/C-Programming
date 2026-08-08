//PROJECT -  Mini Calculator Using else-if

#include<stdio.h>
int main() {
    int num1 , num2;
    char operator;

    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    printf("enter operator(+,-,/,x,%) : ");
    scanf(" %c",&operator);

    if(operator == '+'){
        printf("Sum : %d + %d = %d",num1,num2,num1+num2);
    }
    else if(operator == '-'){
        printf("Subtraction : %d - %d = %d",num1,num2,num1-num2);
    }
    else if(operator == 'x'){
        printf("Product : %d x %d = %d",num1,num2,num1*num2);
    }
    else if(operator == '/'){
        printf("Division : %d / %d = %d",num1,num2,num1/num2);
    }
    else if(operator == '%'){
        printf("Remainder : %d modulu %d = %d",num1,num2,num1%num2);
    }
    else{
        printf("not a valid operator");
    }
    return 0;
}



//Project -  Mini Calculator using switch

#include<stdio.h>
int main() {
    int choice,num1,num2;
    printf("choices are : \n 1.addition \n 2.subtraction \n 3.multiplication \n 4.division \n 5.modulus \n ");
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    printf("enter choice(1-5) : ");
    scanf("%d",&choice);

    switch(choice) {
        case 1 : printf("sum : %d",num1+num2);
        break;
        case 2 : printf("subtract : %d",num1-num2);
        break;
        case 3 : printf("product : %d",num1*num2);
        break;
        case 4 : printf("division : %d",num1/num2);
        break;
        case 5 : printf("remainder : %d",num1 % num2);
        break;
        default : printf("not a valid choice");
    }
    return 0;
}