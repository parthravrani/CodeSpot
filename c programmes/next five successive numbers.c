#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter number for getimg its next 5 successive numbers : ");
    scanf("%d",&n);
    successiveNumbers(n);
    return 0;
}
void successiveNumbers(int number)
{
    int temp = number;
    printf("Successive Numbers from %d are :\n",number);
 
    for(;temp<number+5;temp++)
        printf("%d\n",temp);
}

========
 OUTPUT
========

Enter number for getimg its next 5 successive numbers : 9                                                                   
Successive Numbers from 9 are :                                                                                                  
9                                                                                                                           
10                                                                                                                          
11                                                                                                                          
12                                                                                                                          
13 
