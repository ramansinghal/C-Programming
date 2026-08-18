//PROJECT - Student Academic Information System

#include<stdio.h>
int main(){
    printf("=========================================================================================================================\n");
    printf("STUDENT ACADEMIC INFORMATION\n");
    printf("=========================================================================================================================\n");

    int level,degree,branch,year,sem;

    printf("1.Graduction\n2.Post Gradution\nenter your level : ");
    scanf("%d",&level);

    if(level==1){
        printf("Choose your Degree : \n1.btech\n2.bca\n3.bcom\n4.bsc\n");
        printf("enter your degree : ");
        scanf("%d",&degree);

        if(degree==1){
            printf("choose your branch : \n1.CSE\n2.ECE\n3.Mechanical\n4.Civil\n");
            printf("enter your branch : ");
            scanf("%d",&branch);
        }
        else if(degree==2){
            printf("Thanks for chosing bca !!");
        }
        else if(degree==3){
            printf("Thanks for chosing bcom");
        }
        else if(degree==4){
            printf("Thanks for chosing bsc");
        }

        printf("choose your year :- ");
        printf("1.first year\n2.second year\n3.third year\n4.fourth year\n");
        printf("enter your year : ");
        scanf("%d",&year);

        printf("enter your sem : ");
        scanf("%d",&sem);
}

    else if(level==2){
        printf("Choose your Degree : \n1.M.Tech\n2.MCA\n3.M.SC\n4.M.com\n");
        printf("enter your degree : \n");
        scanf("%d",&degree);

        if(degree==1){
            printf("Degree    :  M.Tech\n");
        }
        else if(degree==2){
            printf("Degree    : MCA\n");
        }
        else if(degree==3){
            printf("Degree    : M.SC\n");
        }
        else if(degree==4){
            printf("Degree    : M.com\n");
        }
        
        printf("1.first year\n2.second year\n");
        printf("enter your year :  ");
        scanf("%d",&year);

        printf("enter your sem :  ");
        scanf("%d",&sem);
    }
    return 0;
}