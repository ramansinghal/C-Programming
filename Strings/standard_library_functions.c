// 1. strlen(str)
#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "Rahul sharma";
    printf("length of name is %d\n",strlen(name));
    return 0;
}


// 2. strcpy(newstr,oldstr)
#include<stdio.h>
#include<string.h>
int main(){
    char oldstr[] = "old string";
    char newstr[] = "new string";
    strcpy(newstr,oldstr);
    puts(newstr);
    return 0;
}


 // 3. strcat(first str,second str)
 #include<stdio.h>
 #include<string.h>
 int main(){
    char firststr[] = "hello ";
    char secondstr[] = "world";
    strcat(firststr,secondstr);
    puts(firststr);                 //hello world
    puts(secondstr);                //world
    return 0;
 }


// 4. strcmp(first str,second str)
#include<stdio.h>
#include<string.h>
int main(){
    char firststr[] = "Banana";
    char secondstr[] = "Aplle";
    int comparison = strcmp(firststr,secondstr);
    printf("%d\n",comparison);
    
    if(comparison >= 1){
        printf("firststr > secondstr");
    }
    else if(comparison <= -1){
        printf("firststr < secondstr");
    }
    else {
        printf("firststr = secondstr");
    }
    return 0;
}