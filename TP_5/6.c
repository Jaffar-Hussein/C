#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef enum Cards {
    TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, VALET, DAME, KING, ACE
} Cards;

typedef struct Player{
    int id;
    Cards card[5];
} Player;

void lucky(Player *player);
int main(){
    srand(time(0));
    Player player1 = {
        .id = 1,
    };
    int cardCount[13] = {0};
    for(int i = 0; i < 5; i++){
        int card;
        do {
            card = rand() % 13; 
        } while(cardCount[card] >= 4); 

        player1.card[i] = card;
        cardCount[card]++;
    }
     for(int i = 0; i < 5; i++){
        printf("\033[1;33mCard %d: \033[0m%d\n", i+1, player1.card[i]);
    }
    lucky(&player1);
}

void lucky(Player *player){
    int flag = 0;
    int i = 0;
    while(flag == 0 & i < 5){
        if(player -> card[i] == ACE){
            flag = 1;
            printf("\033[1;32mLucky\033[0m\n");
        }
        i++;
    }
    if (!flag)
    {
        printf("\033[1;31mNo ACE\033[0m\n");
    }
    
}