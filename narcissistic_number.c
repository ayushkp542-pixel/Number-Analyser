/*A narcissistic number is a number whose sum of each digit raised to the power of the number of digits is equal to the number.*/
#include<stdio.h>
#include<math.h>//For using pow and round functions.
//This function gets the number of digits in a number to use as the power.
int CountDigits(int a){
    if(a==0){
        return 1; //1 because even 0 is a digit.
    }
    else{
        return 1+CountDigits(a/10);
    }
}
//This function sums the digits raised to the power equal to the number of digits.
//double is used as the function return type because pow returns a double.
double sumofdigitspower(int b){
    int c=CountDigits(b);
    if (b==0){
        return 0;
    }
    else{
        return pow(b%10,c)+sumofdigitspower(b/10);
    }
}
//Now to the main function, we take input from the user, check if it's a narcissistic number or not and display the output.
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    //Using round to convert the result of sumofdigitspower to an integer.This is because we are comparing it to an integer.
    int b=round(sumofdigitspower(a));
    //Now we compare the results using ternary operator.
    if(a<0){ //This is to handle negative input.
        int c=a;
        a=-a;
        printf("%d is%s a narcissistic number\n",c, (b==a)?"":" not");
    }
    else{
        printf("%d is%s a narcissistic number\n",a, (b==a)?"":" not");
    }
    return 0;
}
