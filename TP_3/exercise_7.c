#include <stdio.h>
#include <string.h>
void displayer(int argc,char * argv[]);
int main(int argc,char * argv[]){
    for (int i = 0; i < argc; i++){
        printf("Argument : %s, contains %lu characters. \n",argv[i],strlen(argv[i]));
    }
    displayer(argc,argv);
}

void displayer(int argc,char * argv[]){
    int length = 0 , index;
    for (int i = 1; i < argc; i++){
        
        if (strlen(argv[i]) > length){
            length = strlen(argv[i]);
            index = i;
        }
    }
    printf("The longest argument is : %s \n",argv[index]);
}

