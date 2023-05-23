#include<stdio.h>
#include<math.h>
int main(){
    float f,c;
    printf("Enter Fahrenheit Temperature:");
    scanf("%f",&f);
    printf("Converted to Celsius:%.2f",c=(5*(f-32))/9);

//input:98.6
//output:Celsius:37.00

return 0;
}
