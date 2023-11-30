#include <stdio.h> 
float traparea(float a,float b,float h){
    return 0.5*(a+b)*h;
}
float main(){
    float a, b, h,area;
    printf("Enter the length of the trapazium: ");
    scanf("%f",&a);
    printf("Enter the breadth of the trapazium: ");
    scanf("%f",&b);
    printf("Enter the height of the trapazium: ");
    scanf("%f",&h);
    
    area=traparea(a,b,h);
    printf("Area of trapazium is : %f \n",area);
    return 0; 
}
