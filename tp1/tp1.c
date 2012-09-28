#include "tp1.h"

void creerDamier(int taille) {
    
}

void afficherDamier();

void marcher(int i , int j , int tag){
    if(tag > DIM_MAX * DIM_MAX){
        dump();
        exit(0);
    }
    
    damier[i][j] = tag;
    if(damier[i - 2][j + 1] == 0){
        marcher(i - 2 , j + 1 , tag + 1);
    }
    //....
    
    damier[i][j] = 0;
}