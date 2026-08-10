//write a function to count the occourences of vowels in a string.
#include<stdio.h>
void countVowels(char str[]);

void countVowels(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] =='i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
        }
    printf("count is %d\n",count);
}

int main(){
    char str[100];
    printf("enter a str : ");
    scanf("%s",str);
    countVowels(str);
    return 0;
}