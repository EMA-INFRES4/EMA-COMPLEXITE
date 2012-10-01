/* 
 * File:   main.c
 * Author: Crazysky
 *
 * Created on 1 octobre 2012, 15:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv[]) {
    
    
    // récupératon des arguments
    /*if (argc > 1) {
         char * arg = argv[1];
         
    } else {
            printf("AIDE :\n");
    }*/
    
    // Simulation hors ligne
    
    int nb_var = 15;
    int val[nb_var] = {36, 83, 59, 71, 43, 67, 23, 52, 93, 25, 67, 89, 60, 47, 64};
    int limite_masse = 87;
    int masse[nb_var] = {7, 19, 30, 22, 30, 44, 11, 21, 35, 14, 29, 18, 3, 36, 42};
    
    int ratio[nb_var][2];
    for (int i = 0; i <nb_var ; i++){
        ratio[i][0] = val[i]/masse[i];
    }
    for (int i = 0; i <nb_var ; i++){
        printf("%i : %i", ratio[i][0], ratio[i][1]);
    }
    
    
return (EXIT_SUCCESS);
}

