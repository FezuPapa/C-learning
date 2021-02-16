#include <stdio.h>

int main()

{

    /*num1&2 are operands / result is total / char operator is choosed by user */
    int num1, num2, result;
    int loop;
    char oper;
while (loop)
{

     printf("--- CALCULATOR ---\n");

    // user choose num1
    printf("Choose first number: ");
    scanf("%d", &num1);

    //user choose operator
    printf("Choose an operator (+, -, *): ");
    scanf(" %c", &oper);

    //user choose num2
    printf("Choose second number: ");
    scanf("%d", &num2);


    //switch case for operator
    result=0;
    switch(oper)
    {
       case '+':
        result=num1+num2;
        break;


      case '-':
        result=num1-num2;
        break;


      case '*':
        result=num1*num2;
        break;

      default:
        printf("ERROR\n");
        break;
    }

    printf("= %d\n", result);
}
    system("PAUSE");
    return 0;
}
