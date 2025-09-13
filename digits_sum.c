#include <stdio.h>
int digitsum(int a){
    if(a==0){
        return 0;
    }
    else{
    return(a%10)+digitsum(a/10);
    }
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int sum=digitsum(a);
    printf("The sum of digits for the number %d is %d\n",a,sum);
    return 0;
}