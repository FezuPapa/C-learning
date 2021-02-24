#include <stdio.h>
#include <windows.h>
#include <string.h> 

int main()
{
    char intlogin [15], intpassword[15]; // Users creats log/pass
    char login [15], password [15]; // Logs for connect
    

    printf("Choose login: ");  // Users creats his log
    fgets(intlogin, 15, stdin); 

    printf("Choose password: "); // Now his password
    fgets(intpassword, 15, stdin);

    system("cls"); // clean board

    printf("Please enter your login: ");  // Users now connects with the login he created
    fgets(login, 15, stdin);
    printf("Please enter your password: "); // same for password
    fgets(password, 15, stdin);
        
        if (strcmp(login, intlogin) == 0 && strcmp(password, intpassword) == 0)  // If the logs he created == last input =
        {
            printf("You are now connected\n\n");
        }       
        else
        {
            printf("Connection failed\n\n");
        }
                
    system("PAUSE");  
}
