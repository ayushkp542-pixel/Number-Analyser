#include <stdio.h>
/*Must specify the corner point or base case i.e. 0 or else the function will never stop and hence give no output*/
int factorial_finder(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*factorial_finder(a-1);
    }
}
int main(){
    int num;
    printf("Enter the  number to find factorial: ");
    start:
    scanf("%d",&num);
    if(num<0){
        printf("Can not find factorial for a negative number.try a positive number.");
        goto start;
    }
    else{
        int factorial=factorial_finder(num);
    printf("The factorial of %d is %d.",num,factorial);
    }
    return 0;
}