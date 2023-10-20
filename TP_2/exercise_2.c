#include <stdlib.h>
#include <stdio.h>

int main (){
    int random = rand() % 100;
    printf("Guess the random number between 0 and 100 : "); 
    int answer;
    scanf("%d",&answer);
    while(answer != random){
       if (answer > random){
            printf("Too large , Guess lower than %d : ",answer);
       }else {
            printf("Too small , Guess higher than %d : ",answer);
       }
       scanf("%d",&answer);
    }
    printf("Congratulations it was %d, you got it!!!\n",random);
}