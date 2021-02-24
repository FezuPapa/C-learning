#include <stdio.h>
#include <string.h>
#include <windows.h>

int main ()
{
    char text;
    
    printf("Write: Hello world\n");
    scanf("%s[^\n]", &text);
    printf("%s[^\n]", text);
    system("PAUSE");
}