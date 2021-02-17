#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  //set value and operator
  int num1, num2;
  char oper;
  
  printf("Enter a value: ");
  scanf("%d", &num1);
  
  printf("Enter an operator: ");
  scanf(" %c", &oper);
  
  printf("Enter a value: ");
  scanf("%d", &num2);
  
     switch(oper)
     {
       case '+':
         printf("%d", num1 + num2);
         break;
        
       case '-':
         printf("%d", num1 - num2);
         break;
        
       case '*':
         printf("%d", num1 * num2);
         
       case '/':
         printf("%d", num1 / num2);
         
      }
  return 0;
}