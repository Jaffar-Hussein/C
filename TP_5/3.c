#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
void combinator(char *result,char *one,char *two);
int main(){
    char one[MAX_LEN];
    char two[MAX_LEN];
    printf("You will enter two strings\n");
    printf("String 1 : ");
    scanf("%s",one);
    printf("String 2 : ");
    scanf("%s",two);
    int length = strlen(one)+strlen(two)+1;
    char result[length];
    // String has to declared 
    // result[0]='\0';
    combinator(result,one,two);
}

/**
 * Combines two strings and stores the result in a third string.
 * 
 * @param result The string where the result will be stored.
 * @param one The first string to be combined.
 * @param two The second string to be combined.
 */
void combinator(char *result,char *one,char *two){
    strcat(result,one);
    strcat(result,two);
    printf("Combination : %s\n",result);
}