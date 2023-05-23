#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,perimeter,area,s;
    printf("Enter three sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("Area:%.2f\nPerimeter:%.2f",area=sqrt(s*(s-a)*(s-b)*(s-c)),perimeter=a+b+c);

//input:5 4.5 7
//output:Area:11.21 & Perimeter:16.50

return 0;
}
