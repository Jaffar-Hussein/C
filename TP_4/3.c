#include <stdio.h>
#include <string.h>
int vowels(char* word);
int main(){
    char s[20];
    printf("Enter a word: ");
    scanf("%s",&s);
    int vow = vowels(s);
    int consonants = strlen(s) - vow;
    printf("Vowels : %d\nConsonants : %d\n",vow,consonants);
}

int vowels(char* word){
    int count = 0;
    int v = 0;
    while(word[count] != '\0'){
        if(
            // Next time use to lower
            word[count] == 'a' || 
            word[count] == 'A' ||
            word[count] == 'e' ||
            word[count] == 'E' ||
            word[count] == 'i' ||
            word[count] == 'I' ||
            word[count] == 'o' ||
            word[count] == 'O' || 
            word[count] == 'u' ||
            word[count] == 'U'
        ){
            v++;
        }
        count++;
    }
    return v;
}