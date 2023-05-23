#include<stdio.h>
#include<math.h>
int main(){
    int n1=0,n2=1,i,sum=0,n;
    printf("Enter the nth number:");
    scanf("%d",&n);
    printf("The fibonacci series is %d %d",n1,n2);
    for(i=0;i<n-2;i++){
        sum=n1+n2;
        n1=n2;
        n2=sum;
        printf("%3d",sum);
    }


//input:8
//output:The fibonacci series is 0 1 1 2 3 5 8 13

return 0;
}
