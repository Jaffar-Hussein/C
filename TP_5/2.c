#include <stdio.h>
#include <string.h>
#include <ctype.h>
void transformer(char *string);
int main(){
    // Nota Bene You'll get bus error if you try to reassign 
    // string that is made like char *[] - ReadOnly
    char fact[] = "Jaffar is Acing C";
    printf("Original : %s\n",fact);
    transformer(fact);
    printf("Transformation : %s\n",fact);
}
/**
 * Cette procédure transforme toutes les lettres minuscules en majuscules, et réciproquement. 
 * 
 * @param string The string to be transformed.
 */
void transformer(char *string){
    int i = 0;
    while(string[i] != '\0'){
        if(isupper(string[i]) != 0){
            string[i]=tolower(string[i]);
        }else{
            string[i]=toupper(string[i]);
        }
        i++;
    }
}




// Créez une procédure qui prend en entrée une chaîne de caractères. 
// 
// Pour cela, utilisez astucieusement le code ASCII. Vous afficherez ensuite la chaîne transformée.
