#include<stdio.h>
#include<math.h>
int main(){
    int n,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Reverse order of the number:");

    while(n!=0){
        r=n%10;
        n=n/10;
        printf("%d",r);
        sum=sum+r;
    }
    printf("\nSum of digits:%d",sum);

//input:6325
//output:Reverse order of the number:5236 & Sum of digits:16

return 0;
}
