#include <stdio.h>
#include<math.h>
void prime(int a){
    if(a<2){
        printf("%d is not a prime number.\n");
        return;
    }
    for(int b=2;b<=sqrt(a);b++){
        if(a%b==0){
            printf("%d is not a prime number.\n",a);
            return;
        }
    }
    printf("%d is a prime number.\n",a);
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    prime(a);
    return 0;
}