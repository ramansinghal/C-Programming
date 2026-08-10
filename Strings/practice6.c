//check if a given character is present in a string or not.
#include<stdio.h>
int main(){
    char str[100];
    printf("enter a str : ");
    gets(str);
    
    char ch;
    printf("enter ch : ");
    scanf("%c",&ch);

    int found = 0;

    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == ch) {
            found = 1;
            break;
            }
      }
    
            if(found == 1){
                printf("%c is present in string",ch);
            }

        else {
        printf("%c is not present in string",ch);
    }
    
    return 0;

}