#include <stdio.h>
#include <string.h>

void main()
    {
    char word[100];
    int length, counter;
 
    printf("Please enter a string : ");
    scanf("%s",word);
    length=strlen(word);
    int flag = 1;
 
    for(counter = 0; counter < length/2 && flag; counter++) 
    {
        if (word[counter] != word[length-counter-1])
        {
            flag = 0;
            break;
        }
    }
    if (flag) 
    {
        printf("\n%s is a palindrome.", word);
    }
    else
    {
        printf("\n%s is not a palindrome.", word);
    }
}

========
 OUTPUT
========

Please enter a string : CodeSpot                                                                                          
                                                                                                                        
CodeSpot is not a palindrome.  
