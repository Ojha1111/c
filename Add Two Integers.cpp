#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
         printf("Enter two integers: ");
        scanf("%d %d", &firstNumber, &secondNumber);
        sumOfTwoNumbers = firstNumber + secondNumber;
         printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);
		 return 0;
}
