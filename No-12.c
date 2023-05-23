#include<stdio.h>
#include<math.h>
void integartobinary(int a){
    printf("Converted to binary number:");
int i=0,b,arr[32];
while(a!=0){

    b=a%2;
    a=a/2;
arr[i]=b;
i++;
}
int j=i-1;
while(j>=0){
    printf("%d",arr[j]);
    j--;
}
}
int main(){
   int n;
   printf("Enter any integar number:");
   scanf("%d",&n);
   integartobinary(n);

return 0;
}
//input:46
//output:Converted to binary number:0101110
