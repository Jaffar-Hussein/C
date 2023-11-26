#include <stdio.h>
void replace(char * word,char target, char replacement);
int main(){
    char a[] = "abca";
    replace(a, 'a', 'i');
    
    printf("%s\n",a);
}

void replace(char * word,char target, char replacement){
    int counter = 0;
    while(word[counter] != '\0'){
        if(word[counter] == target){
            word[counter] = replacement;
        }
        counter++;
    }
}