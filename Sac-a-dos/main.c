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
int main(int argc, char** argv) {
    
    
    // récupératon des arguments
    
        // init variables 
        //int nb_var;
        /*int val[nb_var] ;
        int limite_masse ;
        int masse[nb_var] ;    
        int ratio[nb_var][2];*/
        
        //char * fich = (char) argv[1];
        
        FILE* fichier = NULL;
        char* nb_var_temp;
        fichier = fopen("P15_0.dat", "r");
        fgets(nb_var_temp, sizeof(nb_var_temp), fichier);
        printf("%s", nb_var_temp);
        fclose(fichier);
      
    getchar();
    getchar();
   
    
    
    
    /*for (int i = 0; i <nb_var ; i++){
        ratio[i][0] = val[i]/masse[i];
    }
    for (int i = 0; i <nb_var ; i++){
        printf("%i : %i", ratio[i][0], ratio[i][1]);
    }*/
    
    
return (EXIT_SUCCESS);
}

