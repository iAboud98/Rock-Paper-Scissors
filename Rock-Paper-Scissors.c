#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int choice;
    printf("Choose 1 for Rock, 2 for Paper, 3 for Scissors :   ");
    scanf("%d",&choice);
    
    srand((unsigned int)time(NULL));
    int min = 1;
    int max = 3;

    int computerChoice = min + rand() % (max - min + 1);
    
    if(choice == 1){
        printf("\nYou choose Rock");
    }else if (choice == 2){
        printf("\nYou choose Paper");
    }else if(choice == 3){
        printf("\nYou choose Scissors");
    }

    if(computerChoice == 1){
        printf("\nComputer choose Rock");
    }else if (computerChoice == 2 ){
        printf("\nComputer choose Paper");
    }else if (computerChoice == 3){
        printf("\nComputer choose Scissors");
    }

    if (choice == computerChoice){
        printf("\nDraw");
    }

    if(choice == 1){
        if (computerChoice == 2){
            printf("\nYou lose.");
        }else if (computerChoice == 3){
            printf("\nYou win.");
        }
    }else if (choice == 2){
        if (computerChoice == 1){
            printf("\nYou win.");
        }else if (computerChoice == 3){
            printf("\nYou lose.");
        }
    }else if (choice == 3){
        if (computerChoice == 1){
            printf("\nYou lose.");
        }else if(computerChoice == 2){
            printf("\nyou win.");
        }
    }

    return 0;
}