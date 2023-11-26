#include <stdio.h>
void addStudent(FILE *file);
void listStudents(FILE *file);
int main(){
    // Create a file for students
    FILE *newFile = fopen("students.txt","a+");
    char response[100];

    // Continue the loop until the user enters 'q' or 'b'
    do {
        // Display the options to the user
        printf("Please choose \n A: Add Student \n B: To Show the List of Students \n Q: Press to quit\n : ");
        // Read the user's choice
        scanf(" %s",response);
        printf("%s\n",response);
        
        // If the user chose 'A' or 'a', call the addStudent function
        if (response[0] == 'A' || response[0] == 'a') {
            addStudent(newFile);
        } else if(response[0] == 'B' || response[0] == 'b') {
            // If the user chose 'B' or 'b', call the listStudents function
            listStudents(newFile);
        }
    } while(response[0] != 'q' && response[0] != 'Q');
    printf("Bye Bye !!\n");
    // Close the file after we're done with it
    fclose(newFile);
}
// Function to add a student
void addStudent(FILE *file){
    char name[50];
    // Ask the user for the student's name
    printf("Enter the student name : ");
    // Read the student's name
    scanf(" %s",name);
    // Write the student's name to the file
    fprintf(file,"%s",name);
}

// Function to list all students
void listStudents(FILE *file){
    char string[200];
    // Move the file pointer back to the start of the file
    rewind(file);
    // Read lines from the file until we reach the end
    while(fgets(string,sizeof(string),file) != NULL){
        // Print each line
        printf("\t - %s",string);
    }
    printf("\n");
}