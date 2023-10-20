#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int palindrome_discoverer(char * suspect);
char * alpha_king(char * mixed);
int main(int argc,char * argv[]){
    int verdict = palindrome_discoverer(alpha_king(argv[1]));
    printf("%d\n",verdict);
    printf("%s",alpha_king(argv[1]));
}

int palindrome_discoverer(char * suspect){
    int length = strlen(suspect);
    int vote = 1;
    for (int i = 0; i < length; i++){
        if (suspect[i] != suspect[length-i-1] )
        {
            vote = 0;
           
        }
    }
    return vote;
}

char *alpha_king(char *mixed) {
    int length = strlen(mixed);
    char *result = malloc(length + 1);
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (isalpha(mixed[i])) {
            result[j] = mixed[i];
            j++;
        }
    }
    result[j] = '\0'; // add null terminator to result array
    return result;
}