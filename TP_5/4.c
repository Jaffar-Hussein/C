#include <stdio.h>
typedef struct Coordinates {
    int abscisse;
    int ordonne;
} Coordinates;
void doubleCoordinates(Coordinates *pointA,Coordinates *pointB);
Coordinates coordonneesVecteur(Coordinates *pointA,Coordinates *pointB);
int main(){
    Coordinates pointA;
    Coordinates pointB;
    pointA.abscisse = -2;
    pointA.ordonne = 1;
    pointB.abscisse = 3;
    pointB.ordonne = 2;
    printf("Point A : (X : %i,Y : %i)\n",pointA.abscisse,pointA.ordonne);
    printf("Point B : (X : %i,Y : %i)\n",pointB.abscisse,pointB.ordonne);
    printf("-------------\n");
    doubleCoordinates(&pointA, &pointB);
    printf("Point A : (X : %i,Y : %i)\n",pointA.abscisse,pointA.ordonne);
    printf("Point B : (X : %i,Y : %i)\n",pointB.abscisse,pointB.ordonne);
    printf("-------------\n");
    Coordinates vect = coordonneesVecteur(&pointA,&pointB);
    printf("Vect : (X : %i,Y : %i)\n",vect.abscisse,vect.ordonne);
}
void doubleCoordinates(Coordinates *pointA,Coordinates *pointB){
    pointA -> abscisse = (pointA->abscisse)*2;
    pointB -> abscisse = (pointB->abscisse)*2;
    pointA -> ordonne = (pointA->ordonne)*2;
    pointB -> ordonne = (pointB->ordonne)*2;
}

Coordinates coordonneesVecteur(Coordinates *pointA,Coordinates *pointB){
    Coordinates vect;
    vect.abscisse = pointB -> abscisse - pointA -> abscisse;
    vect.ordonne = pointB->ordonne - pointB->ordonne;
    return vect;
}