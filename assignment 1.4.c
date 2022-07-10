#include<stdio.h>
int main ()
{
    float radius,area;
    printf("Enter radius:\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circles is %0.2f having the radius %0.2f",area,radius);
    return 0;
}