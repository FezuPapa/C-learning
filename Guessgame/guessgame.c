
 #include<stdio.h>
 #include <stdlib.h>


int main()
{
  int start;          // press to start
  int rnum = 5;       // num to guess
  int usernum = 0;    // users guess
  int counter = 0;    //number of attempts
  int choice;         //users choice exit/continue
        


  printf("1. Start the game\n");  //game start or exit
  printf("2. Exit\n\n");
  scanf(" %d", &start);   //users input start or exit
  system("cls"); // clean board


  switch(start)                      
  {
    case 1:  //User pressed 1, game starts
      

      while(rnum != usernum) // Loop
      { 

        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &usernum); //users input (guess the num)
        

        if (usernum < rnum) //If users input is too low
        {
          printf("More\n\n");  
          counter++;
        }
        else if(usernum > rnum) //If users input is too high
        {
          printf("Less\n\n");
          counter++;
        }
        else   //Correct answer, will show how many attempt and ask for continue/exit
        {

          counter++;
          printf("Correct, after %d attempts.\n\n", counter); //number of attempts
          

          printf("1.Continue\n2.exit\n\n"); //users choice continue / exit
          scanf("%d", &choice);
          system("cls"); //cleanboard
          
          if(choice == 1) //User press 1 : continue, everything reset
          {
            usernum = 0;
            counter = 0;
            rnum = 5;
            start = 1;
            
          }
          if (choice == 2) //exit the game
          {
            exit(0);
          }
          
         }
        
       }

    case 2:   //user typed 2, exit
    printf("Exit\n\n");
    system("PAUSE");
    
  }
 
return 0;

}