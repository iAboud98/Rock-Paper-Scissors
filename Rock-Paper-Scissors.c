#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int choice;
    srand((unsigned int)time(NULL));
    int min = 1;
    int max = 3;

    while(1){

    printf("Choose 1 for Rock, 2 for Paper, 3 for Scissors, 0 to quit :   ");

    scanf("%d",&choice);
    if (choice == 0){
        break;
    }

    int computerChoice = min + rand() % (max - min + 1);
    
    if(choice == 1){
        printf("\nYou choose Rock\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
    }else if (choice == 2){
        printf("\nYou choose Paper\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
    }else if(choice == 3){
        printf("\nYou choose Scissors\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
    }

    if(computerChoice == 1){
        printf("\nComputer choose Rock\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
    }else if (computerChoice == 2 ){
        printf("\nComputer choose Paper\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
    }else if (computerChoice == 3){
        printf("\nComputer choose Scissors\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
    }

    if (choice == computerChoice){
        printf("\nDraw\n");
    }

    if(choice == 1){
        if (computerChoice == 2){
            printf("\nYou lose.\n");
        }else if (computerChoice == 3){
            printf("\nYou win.\n");
        }
    }else if (choice == 2){
        if (computerChoice == 1){
            printf("\nYou win.\n");
        }else if (computerChoice == 3){
            printf("\nYou lose.\n");
        }
    }else if (choice == 3){
        if (computerChoice == 1){
            printf("\nYou lose.\n");
        }else if(computerChoice == 2){
            printf("\nyou win.\n");
        }
    }
    }

    return 0;
}