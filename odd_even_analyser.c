#include <stdio.h>
void evenandodd(int a){
    if(a%2==0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd  number",a);
    }
}
int main(){
    int a;
    printf("Type a number: ");
    scanf("%d",&a);
    evenandodd(a);

    return 0;
}