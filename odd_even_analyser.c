#include <stdio.h>
void oddandeven(int a){
    if(a%2==0){
        printf("%d is an even number\n",a);
    }
    else{
        printf("%d is an odd  number\n",a);
    }
}
int main(){
    int a;
    printf("Type a number: ");
    scanf("%d",&a);
    oddandeven(a);
    return 0;
}