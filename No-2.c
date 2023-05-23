#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main(){
    float r,circumference,area;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    printf("Area:%.2f\nCircumference:%.2f",area=PI*r*r,circumference=2*PI*r);

//input:10
//output:Area:314.16&Circumference:62.83

return 0;
}
