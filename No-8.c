#include<stdio.h>
#include<math.h>
int main(){
     long long int n,i,f=1;
    printf("Enter the number:");
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
       f=f*i;
    }
    printf("Factorial of the number is %lld",f);
//input:6
//output:Factorial of the number is 720

return 0;
}
