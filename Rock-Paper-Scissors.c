#include <stdio.h>

int main (){

    int choice;
    printf("Choose 1 for Rock, 2 for Paper, 3 for Scissors :   ");
    scanf("%d",&choice);
    
    if(choice == 1){
        printf("\nYou choose Rock");
    }else if (choice == 2){
        printf("\nYou choose Paper");
    }else if(choice == 3){
        printf("\nYou choose Scissors");
    }


    return 0;
}