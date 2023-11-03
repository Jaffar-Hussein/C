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

/**
 * Determines whether a given string is a palindrome.
 * 
 * @param suspect The string to check for palindrome-ness.
 * @return 1 if the string is a palindrome, 0 otherwise.
 */
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

/**
 * Returns a new string containing only the alphabetical characters from the input string.
 * 
 * @param mixed The input string to extract alphabetical characters from.
 * @return A new string containing only the alphabetical characters from the input string.
 *         The returned string must be freed by the caller.
 */
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
    free;
    return result;
}