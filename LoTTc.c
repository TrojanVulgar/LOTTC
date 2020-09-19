#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
 
 
void computerGenerator();
void winningNumbers();
void inputstring( char *inputptr );
void printarray(int * arrpt);
void playChoice();
void guess();
void ending();
 
 
char inputarray[512];
char *inputptr = inputarray;
 
 
int main()
{
 
 
   char start;
   srand(time(NULL));
   int counter=0;
   char choice;
   int numPlay=0;
   int lotto[6][5];
   int r, c;
 
 
   printf("                 Welcome to the lotto game!!\n");
   printf("                 ------- -- --- ----- ------\n\n");
   printf("This game asks you to pick six numbers or if you prefer\n");
   printf("quickpick and then prints the winning number in ascending order\n\n");
    
   printf("\tAre you ready to start?(y/n)  ", &start);
   scanf("%c", &start);
   fflush(stdin);
 
 
     if (start == 'y')     // begin if "yes"
     {
         system("cls");
         printf("How many games would you like to play? \n");
         scanf("%d", &numPlay);
         fflush(stdin);
         system("cls");   // clear screen
 
 
         printf(" Would you like to chose your own numbers, or are you lazy and want\n");
         printf(" quick pick instead? \n\n Enter U for user input or Q for quickpick: ");
         scanf("%c", &choice);
         fflush(stdin);
 
 
 
 
      if (choice == 'q')     // begin if "yes"
      {
          system("cls");
              printf("Your quick pick numbers are: \n");
              printf("---- ----- ---- ------- ----\n");
          for( counter=numPlay; counter > 0;  counter--)
          {
               computerGenerator();
          }//end for
      }    //end if
     else
     {
           system("cls");
           printf("Please enter in your 6 numbers: \n");
 
 
  for(r=0; r<numPlay; r++)
  {
         for(c=0; c < 6; c++)
        {
 
 
           scanf("%d", &lotto[c][r]);
        }
  }  //end for r
 
 
  system("cls");
  printf("Here are your %d hand-picked numbers:\n", numPlay);
  printf("---- --- ---- - ----------- --------\n");
    for(r=0; r<numPlay; r++)
    {
            for(c=0; c < 6; c++)
            {
                printf("%2d ", lotto[c][r]);
            }
 
 
       printf("\n");
     }  //end for c
   }// end for
 
 
      winningNumbers();
 
 
   } //end if
       else                // begin if "no"
       {
          system("cls");   // clear screen
          printf("\n\n\n\n");
          printf("\t     Aww...you don't want to try my program?\n");    // ending
          printf("\tWho needs you anyway, huh? Go buy a real ticket.\n\n");
          printf("\tAnother project brought to you by Me\n\n");
       }   // end else
 
 
   printf("\n");
   system("PAUSE");
   return 0;
 
 
}   //end main
 
 
 
 
 
 
void inputstring( char *inputptr )
{
    while ( ( *inputptr++ = getchar() ) != '\n' )
       {
         //printf("%c", (*inputptr));
        }
        //        printf("\n");
        *( --inputptr ) = '\0';
}
 
 
 
 
void computerGenerator()
{
   int array[6]={0};
   int arrlen;
 
 
   arrlen = sizeof(array)/sizeof(int);
 
 
   for(int x=0; x < arrlen; x++ )
   {
       array[x] = (int) rand()%53+1;
       for(int y=0; y<x; y++)
       {
          if (array[y] == array[x])
          {
             array[x] = (int) rand()%53+1;
             y=0;
          }  //if()
       }   //for (y)
    }  //for (x)
 
 
    // sort array using swap and bubbles
 
 
    for(int y=0; y < arrlen-1; y++ )
    {
       for(int x=0; x < arrlen-1; x++ )
       {
          if (array[x] > array[x+1])
          {
             int temp;
             temp = array[x];
             array[x] = array [x+1];
             array [x+1] =temp;
          }  //
       }   //
    }  //
 
 
    printarray(array);
}   // end generator
 
 
void winningNumbers()
{
   int array[6]={0};
   int arrlen;
 
 
   arrlen = sizeof(array)/sizeof(int);
 
 
   for(int x=0; x < arrlen; x++ )
   {
       array[x] = (int) rand()%53+1;
       for(int y=0; y<x; y++)
       {
          if (array[y] == array[x])
          {
             array[x] = (int) rand()%53+1;
             y=0;
          }  //if()
       }   //for (y)
    }  //for (x)
 
 
    // sort array using swap and bubbles
 
 
    for(int y=0; y < arrlen-1; y++ )
    {
       for(int x=0; x < arrlen-1; x++ )
       {
          if (array[x] > array[x+1])
          {
             int temp;
             temp = array[x];
             array[x] = array [x+1];
             array [x+1] =temp;
          }  //
       }   //
    }  //
    printf("\n\nThe winning lotto numbers are: \n");
    printf("--- ------- ----- ------- ---- \n");
    printarray(array);
}   // end generator
 
 
void printarray(int*arrpt)
{
 
 
   for (int x=0; x<6; x++)
   {
       printf("%2d ", arrpt[x]);
   }
   printf("\n");
}      // end printarray
 
 
void guess()
{
    int play[6]={0};
    printf("Enter the six numbers you want to play\n");
    printf("Type them in separating by a space\n");
 
 
    inputstring( inputptr );
    system("CLS");
}
 
 
void ending()
{
     int iochar;
     printf("\nYour hand-picked numbers are:  ");
     printf( inputarray );
     printf("\n");
}