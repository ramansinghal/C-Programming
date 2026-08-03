//write functions to calculate area of a circle,a square and a rectangle.

#include<stdio.h>
void SquareArea(int n);           //n = side of square
float CircleArea(int r);          //r = radius of circle
void RectangleArea(int L,int B);  //L = length , B = breadth

int main(){
    int L=4;
    int B=5;
    RectangleArea(L,B);

    int r = 3;
    CircleArea(r);

    int n=6;
    SquareArea(n);
}

void SquareArea(int n) {
    printf("area of square is %d\n",n*n);
}
float CircleArea(int r) {
    float area = 3.14 * r * r;
    printf("area of circle is %.2f\n",area);
}
void RectangleArea(int L,int B){
    printf("area of rectangle is %d\n",L*B);
}
