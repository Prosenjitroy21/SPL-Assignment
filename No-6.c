#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("The largest number is %d",a);
    else if(b>a && b>c)
    printf("The largest number is %d",b);
    else
    printf("The largest number is %d",c);

//input:6 4 8
//output:The largest number is 8

return 0;
}
