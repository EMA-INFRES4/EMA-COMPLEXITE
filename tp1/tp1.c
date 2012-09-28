#include "tp1.h"

/**
 * Creation d'un damier de taille "Taille"
 * @param taille Taille du daminer
 */
void creerDamier(int taille) {
    int i,j;
    tailleDamier = taille;
    for(i = 0 ; i < tailleDamier + 4 ; i++){
        for(j = 0 ; j < tailleDamier + 4 ; j++){
            if(i <= 1 || j <= 1 || i >= tailleDamier + 2 || j >= tailleDamier + 2){
                damier[i][j] = 1;
            }else{
                damier[i][j] = 0;
            }
        }
    }
    dumpDamier();
}

/**
 * Affiche le damier à l'écran
 */
void dumpDamier(){
    int i,j;
    for(i = 0 ; i < tailleDamier + 4 ; i++){
        for(j = 0 ; j < tailleDamier + 4 ; j++){
            printf("%i\t" , damier[i][j]);
        }
        printf("\n");
    }
}

/**
 * Bouge le cavalier
 * @param i position 1
 * @param j position 2
 * @param tag
 */
void marcher(int i , int j , int tag){
    if(tag > DIM_MAX * DIM_MAX){
        dumpDamier();
        exit(0);
    }
    
    damier[i][j] = tag;
    if(damier[i - 2][j + 1] == 0){
        marcher(i - 2 , j + 1 , tag + 1);
    }
    //....
    
    damier[i][j] = 0;
}