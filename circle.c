#include<stdio.h>
#define PI 3.14159

int main(){
    float area,radius;
    printf("radius of circle=");
    scanf("%f",&radius);
     area = PI * radius * radius;
    printf("Area of the circle = %f\n", area);
    return 0;

}