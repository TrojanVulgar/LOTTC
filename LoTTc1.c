#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
//Prototype
char randomNums(char * x, char y)
{
          char z;
           for(z=0;z<=6;z++)
           if(x[z]==y)
          return !0;
           return 0;
}
 
 
//Start main
int main(void)
{
          //Declare variables
            char r1[6], r2[6];
            char i,j;
            char num;
             char * l;
           //Enter numbers and check conditions
            for(j=0, l=r1;j<2;j++)
            {
            do{
                  num=0;
                  //Enter input
               printf("\nEnter six numbers[Between 1 and 40]:\n");
               for(i=0;i<6;i++)
               {
                     scanf("%d",l+i);
                     if(*(l+i)>40 || *(l+i)<1) num = !0;
               }
               printf("\n");
               //Check condition
               if(num)
               {
               printf("Entered range numbers wrong. So give only between 1 and 40 .\n");
         }
       } while(num);
      l=r2;
   }
   for(i=0;i<6 && randomNums(r1,r2[i]);i++);
   {
         if(i==6)
         {
                  //Display the output
                  printf("YOU WON THE JACKPOT\n");
         }
         else
         printf("Sorry..Better luck next time...\n");
         getch();
   }
}
this one is my own program