
#include<stdio.h>

#include<string.h>

#include<stdlib.h>





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
    
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");


    printf("\n\t\t\t############                CR Election Machine                     ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    messagePrint(message);

    printf("\n\t\t\t----------------------------------------------------------------------------");
}


void welcomeMessage()
{
   
    headline("Welcome to The Election");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                   CR                      =");
    printf("\n\t\t\t        =                  VOTING                   =");
    printf("\n\t\t\t        =                 MACHINE                   =");


    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  *------------------*\n");
    

}



void castvote(){
   int option;


   printf("\n\n ### Select the candidate ####\n\n");
   printf("\n 1. %s", CR_CAND1);

   printf("\n 2. %s", CR_CAND2);

   printf("\n 3. %s", CR_CAND3);

   printf("\n4. %s", "None of These");

   printf("\n Enter your option : ");
   scanf("%d",&option);

   switch(option){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      default: printf("\n Error: Wrong Choice !! Please retry");
    
      getchar();
   }
   printf("\n Vote has been casted");
}
void votesCount(){

   printf("\n\n Dashboard \n\n");

   printf("\n %s - %d ", CR_CAND1, votescount1);
   printf("\n %s - %d ", CR_CAND2, votescount2);
   printf("\n %s - %d ", CR_CAND3, votescount3);

}


void leadWinner(){
    
    int leader  = 1; 
    
    int win =votescount1;

    if(win<votescount2)
    {
        win = votescount2;
        leader = 2;
    }
    
    if(win < votescount3)
    {
        win = votescount3;
        leader = 3;
    }

    switch(leader)
    {
        case 1: printf(" \t the leader is Saahil singh rathor  (^_^)  \t votes: %d   ", win);
            break;
        
        case 2: printf("\t  the leader is Srajeta  (^_^),\t votes: %d  ", win);
            break;

        case 3: printf(" \t the leader is Aman  (^_^), \t votes: %d ", win);
    }
  
}


int main(){
   int i;
   int choice;
   
   welcomeMessage();
   
   
   do{

      printf("\n\n CR Election System \n\n");

      printf("\n 1. Cast Vote");

      printf("\n 2. Access the leaderboard count");

      printf("\n 3. View the winner");
      
      printf("\n 4. Exit");

      printf("\n Please enter your choice : ");
      scanf("%d", &choice);

      switch(choice){

         case 1: castvote();break;
         case 2: votesCount();break;
         case 3: leadWinner(); break;
        
         default: printf("\n Error: Invalid Choice");
      }

   }while(choice!=0);

   getchar();
   return 0;
}
