#include <stdio.h>
float mean(float notes[4]);
int index_sniffer(float means[5]);
int main (){
    float notes[5][4] = {
        {12,13.5,8,11},
        {7.5,18,12,13.75},
        {6,8,15,17},
        {10.75,12,7,19},
        {14,10,12,12.75}
    };
    float means [5];
    for (int i = 0; i < 5; i++){
        float mean_etudiant = mean(notes[i]);
        means[i] = mean_etudiant;
        printf("Etudiant %d : %.2f\n",i,means[i]);
    }
    printf("Winner : Stundent %d\n",index_sniffer(means));
}

float mean(float notes[4]){
    float total = 0;
    for (int i = 0; i < 4; i++){
        total += notes[i];
    }
    return total / 4;
}

int index_sniffer(float means[5]){
    float max_value = 0;
    float index = 0;
    for (int i = 0; i < 5; i++){
        if (means[i] > max_value){
            max_value = means[i];
            index = i;
        }
    }
    return index;
}