#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
  char number[10];
  int flag=0;
  int length;
  printf("Enter a number to check if it is a int or float : ");
  scanf("%s",number);
  length=strlen(number);

  while(length--)
  {
    if(number[length]=='.')
    {
      flag=1;
      break;
    }
  }

  if(flag)
    printf("Entered Number is a Float Number\n");
  else
    printf("Entered Number is a Integer\n");
 
  getch();

  return 0;
}

========
 OUTPUT
========

Enter a number to check if it is a int or float : 68.203
Entered Number is a Float Number
