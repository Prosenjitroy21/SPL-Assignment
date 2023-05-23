#include<stdio.h>
#include<math.h>
int main(){
    float n,i,sum=0;
    printf("Enter the nth number of the series:");
    scanf("%f",&n);
for(i=1;i<=n;i++){
    sum=sum+(1/pow(i,i));

}
    printf("Sum of the series:%f",sum);

//input:5
//output:Sum of the series:1.291263
return 0;
}
