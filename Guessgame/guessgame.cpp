
 #include<stdio.h>
 #include <stdlib.h>


int main()
{
  int start;          // press to start
  int rnum = 5;       // num to guess
  int usernum = 0;    // users guess
        


  printf("1. Start the game\n");  //game start or exit
  printf("2. Exit\n\n");
  scanf(" %d", &start);   //users input start or exit



  switch(start)                      
  {
    case 1:  //User pressed 1, game starts
      

      while(rnum != usernum)
      { 

        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &usernum); //users input (guess the num)
        

        if (usernum < rnum) //users input too low
        {
          printf("More\n\n");  
        }
        else if(usernum > rnum) //users input too high
        {
          printf("Less\n\n");
        }
        else   //Correct answer, system will pause
        {
          printf("Correct\n\n"); 
          system("PAUSE");
        }
        
       }

      
    case 2:                         //user typed 2, exit
    printf("Exit\n\n");
    system("PAUSE");
    
  }
 

return 0;
}