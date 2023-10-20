#include <stdio.h>
void skeleton_key(int* one,int* two);
int main(){
    int player_1 = 10;
    int player_2 = 23;
    printf("Life of player 1 : %d\n", player_1);
    printf("Life of player 2 : %d\n", player_2);
    skeleton_key(&player_1,&player_2);
    printf("Life of player 1 : %d\n", player_1);
    printf("Life of player 2 : %d\n", player_2);
}

void skeleton_key(int* one,int* two){
    int temp = *one;
    *one = *two;
    *two = temp;
}