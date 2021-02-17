#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  //set value and operator
  int num1, num2;
  char oper, loop;
  
  loop=0;
  while(loop != 1)
  {
  
    printf("Enter a value: ");
    scanf("%d", &num1);
  
    printf("Enter an operator: ");
    scanf(" %c", &oper);
  
    printf("Enter a value: ");
    scanf("%d", &num2);
  
       switch(oper)
       {
         case '+':
         printf("= %d\n", num1 + num2);
         break;
        
         case '-':
         printf("= %d\n", num1 - num2);
         break;
        
         case '*':
         printf("= %d\n", num1 * num2);
         break;
         
         case '/':
         printf("= %d\n", num1 / num2);
         break;
        }
    printf("Y/N Would you like to continue ?");
    scanf(" %c", &loop);
   }
  return 0;
}