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
void combinator(char *result,char *one,char *two){
    // if its odd
    // if its even
    strcat(result,one);
    strcat(result,two);
    // int i = 0;
    // while(one[i] != '\0'){
    //     result[i]=one[i];
    //     i++;
    // }
    // int j = 0;
    // while (two[j] != '\0')
    // {
    //     result[i]=two[j];
    //     j++;
    //     i++;
    // }
    // result[i]='\0';
    printf("Combination : %s\n",result);
    
}