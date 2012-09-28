/* 
 * File:   tp1.h
 * Author: Xavier TALANDIER
 *
 * Created on 28 septembre 2012, 10:27
 */

#ifndef TP1_H
#define	TP1_H

#ifdef	__cplusplus
extern "C" {
#endif
    #define DIM_MAX 100
    int damier[DIM_MAX + 4][DIM_MAX + 4];

    void creerDamier(int taille);
    
    void afficherDamier();


#ifdef	__cplusplus
}
#endif

#endif	/* TP1_H */

