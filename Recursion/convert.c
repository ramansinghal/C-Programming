//write a function to convert celsius to fahrenheit

#include<stdio.h>
float convertTemp(float celsius);

int main(){
    printf("temp in fahrenheit is %.2f",convertTemp(32));
    return 0;
}

float convertTemp(float celsius){
    float fahrenheit = celsius * 9/5 + 32;
    return fahrenheit;
}