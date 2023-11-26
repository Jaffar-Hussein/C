#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
char * reverse(char * word);
int main(){
    char * sample = "Hello";
    char * result = reverse(sample);
    printf("Original : %s\n",sample);
    printf("Final    : %s\n",result);
}
char * reverse(char * word){
    int length = strlen(word);
    char *reversal = malloc((length + 1)*sizeof(char));
    
    int counter = length;
   for(int i = 0; i < length; i++){
        reversal[i] = word[length - i - 1];
    }
    reversal[length] = '\0';
    return reversal;
}
