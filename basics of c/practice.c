//print area of square
#include<stdio.h>
int main() {
    int side;
    printf("enter side : ");
    scanf("%d",&side);
    printf("area of square is %d\n",side*side);
    return 0;
}

//print area of circle
#include<stdio.h>
int main() {
    int radius;
    printf("enter radius : ");
    scanf("%d",&radius);
    printf("area of circle is %.2f\n",3.14*radius*radius);
    return 0;
}

//calculate perimeter of rectangle
#include<stdio.h>
int main() {
    int L , B;
    printf("enter length (L) : ");
    scanf("%d",&L);
    printf("enter breadth (B) : ");
    scanf("%d",&B);
    printf("perimeter of rectangle is %d\n",2*(L+B));
    return 0;
}         

//calculate cube of a number n;
#include<stdio.h>
int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printf("cube is %d",n*n*n);
    return 0;
}