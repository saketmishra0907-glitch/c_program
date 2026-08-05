#include <stdio.h>
int main() {
    int p,n;
    float si,r;
    
    printf("Enter principal amt: ");
    scanf("%d", &p);
    
    printf("Enter number of years: ");
    scanf("%d", &n);
    
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    
    si = (p * n * r) / 100.0;
    printf("Simple interest = %f \n", si);
    
    return 0;
}