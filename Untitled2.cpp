#include<stdio.h>

int main(){
    float radius,area;
    
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    
    printf("Area of the circle is :%.2f\n",area);
    
    return 0;
}