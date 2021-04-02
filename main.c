#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*************prototype**********************/


void generatedes(int [],int);


/********implémentation**********************/


void generatedes(int lesdes[],int nbdes) {
for(int i=0;i<nbdes;i++) //pour i allant de 0 aux nombres de dés
{
    lesdes[i]=random()%6+1; //j'affecte un nombre entre 1 et 6
}

}
/************************programme principal*************************/
int main() {
    srand(time(NULL)); //permet de changer de nombre aléatoire
    int tabdes[6]; //taleau de dés
    generatedes(tabdes,5); //générations des dés

    /***************affichage des dés********************************/
    for(int i;i<5;i++) //pour i allant de 0 à 4
    {
        printf("%d ",tabdes[i]); //affiche le contenu du tableau à l'indice i
    }

    return 0;
}
