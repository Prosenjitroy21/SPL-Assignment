#include<stdio.h>
#include<math.h>
int main(){
   int a,b,gcd,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    printf("GCD:%d",gcd);

//input:81 153
//output:GCD:9

return 0;
}
