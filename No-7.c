#include<stdio.h>
#include<math.h>
int main(){
     float a,b,c,d;
     scanf("%f",&a);
     if(a==0)
        printf("Invalid number");
     else{
        scanf("%f%f",&b,&c);
        d=(b*b)-4*a*c;
        if(d==0)
            printf("Unique number:%.2f",-b/(2*a));
        else if(d>0)
            printf("X1:%.2f\nX2:%.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
        else
            printf("Imaginary number");
     }
//input:0 5 3
//output:Invalid number
//input:2 4 2
//output:Unique number:-1.00
//input:2 5 3
//output:X1:-1.00 & X2:-1.50
//input:5 5 3
//output:Imaginary number
return 0;
}

