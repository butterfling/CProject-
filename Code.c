#include<stdio.h>

#include<string.h>

#include<stdlib.h>
#include<conio.h>

#define CANDIDATE_COUNT
#define CR_CAND1 "Saahil"
#define CR_CAND2 "Srajeta"
#define CR_CAND3 "Aman"

int votescount1=0, votescount2=0, votescount3=0;


void messagePrint(const char* message)
{
    int len =0;
    int pos = 0;
  
    len = (78 - strlen(message))/2;

    printf("\t\t\t");
    for(pos =0 ; pos < len ; pos++)
    { 
        printf(" ");
    }
    
    printf("%s",message);
}


void headline(const char *message)
{
    system("COLOR 02");
    
    printf("\t\t\t\t###########################################################################");
    printf("\n\t\t\t\t############                                                   ############");


    printf("\n\t\t\t\t############                CR Election Machine                ############");
    printf("\n\t\t\t\t############                                                   ############");
    printf("\n\t\t\t\t###########################################################################");
    printf("\n\t\t\t\t---------------------------------------------------------------------------\n");
    messagePrint(message);

    printf("\n\t\t\t\t----------------------------------------------------------------------------");
}


void welcomeMessage()
{
   
    headline("Welcome to The Election");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t\t                 ------------------\n");
    printf("\n\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t      =                 WELCOME                   =");
    printf("\n\t\t\t\t      =                   TO                      =");
    printf("\n\t\t\t\t      =                   CR                      =");
    printf("\n\t\t\t\t      =                  VOTING                   =");
    printf("\n\t\t\t\t      =                 MACHINE                   =");


    printf("\n\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t                ------------------\n");
    

}



void castvote(){
   int option;


   printf("\n\n \t \t \t \t \t ### Select the candidate ####\n\n");
   printf("\n \t\t\t\t\t\t 1. %s", CR_CAND1);

   printf("\n \t\t\t\t\t\t 2. %s", CR_CAND2);

   printf("\n \t\t\t\t\t\t 3. %s", CR_CAND3);

   printf("\n  \t\t\t\t\t\t 4. %s", "None of These");

   printf("\n \t\t\t\t\t\t  Enter your option : ");
   scanf("%d",&option);

   switch(option)
   {
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      default: printf("\n Error: Wrong Choice !! Please retry");
    
      getchar();
   }
   printf("\n \t\t\t\t\t\t  Vote has been casted");
}
void votesCount(){

   printf("\n\n \t\t\t\t\t\t Dashboard \n\n");

   printf("\n \t\t\t\t\t\t %s - %d ", CR_CAND1, votescount1);
   printf("\n \t\t\t\t\t\t %s - %d ", CR_CAND2, votescount2);
   printf("\n \t\t\t\t\t\t %s - %d ", CR_CAND3, votescount3);

}



void leadWinner(){
    
    int leader  ; 

    int win =votescount1;

   if ( votescount1 > votescount2 && votescount1 > votescount3 )
        {   
            leader = 1 ;
            win = votescount1;
        }


   else if ( votescount2 > votescount1 && votescount2 > votescount3 )
        {   
            leader = 2 ;
            win = votescount2;
        }
      

   else if ( votescount3 > votescount1 && votescount3 > votescount2 )
        {   
            leader = 3 ;
            win = votescount3;
        }

   else   
      leader = 4;

    switch(leader)
    {
        case 1: printf("\n\n \t\t\t\t\t  Saahil singh rathore  wins  \t votes: %d   ", win);
            break;

        case 2: printf("\n\n \t\t\t\t\t   Srajeta wins \t votes: %d  ", win);
            break;

        case 3: printf(" \n\n \t\t\t\t\t  Aman  wins \t votes: %d ", win);
            break;

        case 4: printf(" \n\n \t\t\t\t\t the voting has not started or in progress  ");
            break;
            
        
    }
    
}


int main()
{
    system("cls");
   int i;
   int choice;
   
   welcomeMessage();
   
   
   do{

      printf("\n\n \t \t \t \t \t \t CR Election System \n\n");

      printf("\n \t \t \t \t \t \t 1. Cast Vote");

      printf("\n \t \t \t \t \t \t 2. Access the leaderboard count");

      printf("\n \t \t \t \t \t \t 3. View the winner");
      
      printf("\n \t \t \t \t \t \t 4. Exit");

      printf("\n \t \t \t \t \t \t  Please enter your choice : ");
      scanf("%d", &choice);

      switch(choice){

         case 1: castvote();break;
         case 2: votesCount();break;
         case 3: leadWinner(); break;
        
        default: goto voteend;
         
         //default: printf("\n \t \t \t \t \t \t   Error: Invalid Choice");
              
      }

   }while(choice!=0);

   voteend:printf("\n\n \t \t \t \t \t \t  Thank You !");

   getchar();
   return 0;
}
