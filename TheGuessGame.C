#include <stdio.h>
#include<stdlib.h>



int main ()
{
    int num;
    char fname[25];
    char lname[25];
    int GuessedNum;
    static int Count = 0;
    
    
    //  Number
    printf("Enter Random Number: \t ");
    scanf("%d",&num);
    system("cls");//clear screen

    printf("========================\n");
    printf("\tGAME BEGIN\n");
    printf("========================\n");

    //Name 
    printf("\nEnter Player First Name : \t ");
    scanf("%s",fname);
    printf("\nEnter Player Last Name : \t ");
    scanf("%s",lname);
    
    system("cls");
    
    //Guess the number
    IntialStyle:
        printf("=========== GAME =============\n");
        
        goto gameBegin;

    gameBegin:
    printf("Dear %s %s \n", fname, lname);
       

        if(Count< 4)
        {
            printf("Choose A number from 1 to %d : \t ", num+5);
            scanf("%d", &GuessedNum); 
            if (GuessedNum > num)
        {
            goto Greater;
        }
        else if (GuessedNum == num)
        {
            goto equal;
        }
        else if (GuessedNum < num)
        {
            goto Smaller;
        }

        
        }
        else{
            goto LoseGAME;
        }


    Greater:
    system("cls");
        printf("=========== GAME =============\n");
        printf("The Entered number is greater the orignal Number \n Please Try again\n ");
        Count = Count +1;
        printf("You Tried %d\n", Count);
        goto gameBegin;

    Smaller:
        system("cls");
        printf("=========== GAME =============\n");
        printf("The Entered number is Smaller the orignal Number \n Please Try again\n ");
        Count = Count +1;
        printf("You Tried %d\n", Count);
        goto gameBegin;
    equal: 
        system("cls");
        printf("=========== GAME =============\n");
        printf("WEll Done ! The Correct Answer Is : %d", num);
        printf("\n\t ============  You Won ============  \n");
         goto endGAME;

    LoseGAME:system("cls");
        printf("=========== GAME =============\n");
        printf("Sorry  ! The Correct Answer Is : %d", num);
        printf("\n\t ============  You Loss ============  \n");
        goto endGAME;
    endGAME:
        return 0;
    
}