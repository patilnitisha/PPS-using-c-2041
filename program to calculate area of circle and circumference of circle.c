#include<stdio.h>
int main ()
{
    float radius , area , circumference ;
    
    printf("Enter the radius of the circle:\t");
    scanf("%f" , &radius);
    
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    
    printf("Area of the circle = %f\n",area);
    printf("Circumference of the circle = %f\n",circumference);
    
    return 0;
}