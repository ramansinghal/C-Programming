//write a function to print "hot" or "cold" depending on the temperature user enters.
#include<stdio.h>
void hotORcold(int temp);

void hotORcold(int temp){
    if(temp >= 20){
    
        printf("hot\n");
    }
    else{
        printf("Cold\n");
    }
}

int main(){
    int temp;
    printf("enter temp : ");
    scanf("%d",&temp);
    hotORcold(temp);
    return 0;
}