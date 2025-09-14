#include <stdio.h>
#include <math.h>
void perfectnumber(int a){
    int c=0;
    for(int b=1;b<a;b++){
        if(a%b==0){
            c=c+b;
        }
    }
    if(a==c){
        printf("%d is a perfect number.\n",a);
    }
    else{
        printf("%d is not a perfect number.\n",a);
    }
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    perfectnumber(a);
    return 0;
}