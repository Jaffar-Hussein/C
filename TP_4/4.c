#include <stdio.h>
#include <string.h>

int main(){
    char *s = "j af fa r";
    // printf("Enter a word : ");
    // scanf("%s",s);
    int counter = 0;
    int new = 0;
    char r[30];
    
    while(s[counter] != '\0'){
        if(s[counter] != 32){
            r[new] = s[counter];
            new++;
        }
        counter ++;
    }
    r[new] = '\0';
    printf("%s\n",r);
}