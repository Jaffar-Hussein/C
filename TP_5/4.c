#include <stdio.h>

/**
 * @brief Defines a struct for coordinates with integer values for abscisse and ordonne.
 * 
 */
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

/**
 * Doubles the coordinates of two points.
 * 
 * @param pointA Pointer to the first point's coordinates.
 * @param pointB Pointer to the second point's coordinates.
 */
void doubleCoordinates(Coordinates *pointA,Coordinates *pointB){
    pointA -> abscisse = (pointA->abscisse)*2;
    pointB -> abscisse = (pointB->abscisse)*2;
    pointA -> ordonne = (pointA->ordonne)*2;
    pointB -> ordonne = (pointB->ordonne)*2;
}

/**
 * Calculates the coordinates of a vector given two points.
 * 
 * @param pointA Pointer to the first point.
 * @param pointB Pointer to the second point.
 * @return The coordinates of the resulting vector.
 */
Coordinates coordonneesVecteur(Coordinates *pointA,Coordinates *pointB){
    Coordinates vect;
    vect.abscisse = pointB -> abscisse - pointA -> abscisse;
    vect.ordonne = pointB->ordonne - pointB->ordonne;
    return vect;
}