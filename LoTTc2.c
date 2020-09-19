#include <stdio.h>
#include <stdlib.h>
 

void fCompare(int userNumbers[6]);

 

int main()

{ 

    int userNumbers[] = {0,0,0,0,0,0};

     
    printf("Please bet 6 numbers in the range 1-40: ");

    scanf("%%d %d %d %d %d %d",&userNumbers[0],&userNumbers[1],&userNumbers[2],&userNumbers[3],&userNumbers[4],&userNumbers[5]);

    printf("\n");

    fCompare(userNumbers);

 
    system ("PAUSE");

    return 0 ;
}
 

void fCompare(int userNumbers[6])
{

    int i = 0;

    int true = 1;

    int correct = 0;

    for(i = 0; i < 6; i++)

    {

        if(userNumbers[i] == true ) correct++;
    }

    if (correct == 6) //do something
        printf("God is good");

    else

    printf("YOU LOSE\n");   

}
