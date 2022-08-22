//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum status {CONTINUE, WON, LOST};
enum month {JAN = 1, FEB, MAR, DEC };
// #define CONTINUE 0
// #define WON 1
// #define LOST 2
int roll_dice();

int main(){
    enum status game_status = CONTINUE;
    srand(time(NULL)); //if you wanna repeat the simulat,on you should give a constant instead of time(NULL)

    int sum = roll_dice();
    int points = 0;
    

    switch(sum){
        case 7:
        case 11:
            game_status = WON;
            break;
        case 2:
        case 3:
        case 12:
            game_status = LOST;
            break;
        default:
            points = sum;
            printf("Points: %d\n", sum);
            break;
    }
    while(game_status == CONTINUE){
        sum = roll_dice();
        if(sum == points){
            game_status = WON;
        } else if (sum == 7){
            game_status = LOST;
        }

    }
    if (game_status == WON){
        printf("Player wins\n");
    }
    else{
        printf("Player loses\n");
    }


    return EXIT_SUCCESS;
}

int roll_dice(){
    int die1 = rand() % 6 + 1; 
    int die2 = rand() % 6 + 1;
    printf("Player rolled: %d-%d\n", die1, die2);
    return die1 + die2;
}
