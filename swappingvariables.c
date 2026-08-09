#include<stdio.h>
int main() {
    int num1,num2,temp;
    //input two numbers
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    //Swap process using a 3rd variable (temp)
    temp=num1;
    num1=num2;
    num2=temp;
    //output the swaped values
    printf("After swapping:\n");
    printf("First number+%d\n",num1);
    printf("second  number=%d\n",num2);
    return 0; 
}