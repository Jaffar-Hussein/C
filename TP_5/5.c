#include <stdio.h>
#include <string.h>
typedef struct Lesson {
    char name[30];
    int code;
} Lesson; 

typedef struct Student {
    char name[100];
    int StudentID;
    int age;
    Lesson lesson;
} Student;

void set_chars(char list[],char * chaine);
int main (){
    Lesson lesson1 = {
        .code = 3,
        .name = "Math"
    };
    Lesson lesson2 = {
        .code = 4,
        .name = "Chemistry"
    };    
    Lesson lesson3 = {
        .code = 5,
        .name = "Biology"
    };
    Student student1 = {
        .name = "Jaffar",
        .age = 34,
        .StudentID = 33344,
        .lesson = lesson2
    };
    Student student3 = {
        .name = "Hanan",
        .age = 34,
        .StudentID = 33435,
        .lesson = lesson1
    };
    Student student2 = {
        .name = "Habiba",
        .age = 25,
        .StudentID = 33354,
        .lesson = lesson3
    };
    set_chars(student1.name,"John");
    printf("%s",student1.name);
}  
void set_chars(char list[],char * chaine){
    int len = strlen(chaine);
    for(int i; i <len; i++){
        list[i] = chaine[i];
    }
    list[len] = '\0';
}