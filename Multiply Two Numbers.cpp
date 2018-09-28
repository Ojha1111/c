#include <stdio.h>
int main()
{
    double firstNumber, secondNumber, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);  
    product = firstNumber * secondNumber;  
    printf("Product = %.2lf", product);
    return 0;
}
