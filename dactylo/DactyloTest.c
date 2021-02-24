#include <stdio.h>
#include <string.h>
#include <windows.h>

int main ()
{
    char utext [15];
    
    
    printf("type : Hello\n");
    fgets(utext, 15, stdin);
        
        if (strcmp(utext, "Hello") == 1)
        printf("Nice\n");

        else
        printf("Wrong\n");
    



system("PAUSE");
}
