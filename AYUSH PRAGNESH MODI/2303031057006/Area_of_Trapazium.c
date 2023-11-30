#include <stdio.h> 
float traparea(float a,float b,float h){
    return 0.5*(a+b)*h;
}
float main(){
    float a = 9.0, b=10.0, h=8.0,area;
    area=traparea(a,b,h);
    printf("Area of trapazium is : %f \n",area);
    return 0; 
}
