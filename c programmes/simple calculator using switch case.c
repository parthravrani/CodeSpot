#include <stdio.h>

int main()
{
    char operator;
    double firstNumber,secondNumber;    
    printf("Enter an operator (+, -, *,): ");    
    scanf("%c",&operator);    
    printf("Enter two operands: ");    
    scanf("%lf %lf",&firstNumber,&secondNumber);
    switch(operator)
    {
        case'+':            
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
        break;
        
        case'-':            
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
        break;
        
        case'*':            
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
        break;
        
        case'/':            
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
        break;

        default:            
            printf("Error! operator is not correct");
        }
    return 0;
}

========
 Output
========

Enter an operator (+, -, *,): +                                                                                             
Enter two operands: 6 8                                                                                                     
6.0 + 8.0 = 14.0
