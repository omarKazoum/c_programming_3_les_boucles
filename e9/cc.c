#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Écrire un programme C permettant de lire la valeur de la température de l'eau et d'afficher son état :

Glace si la température est inférieure à 0, t≤ 0.
Eau si la température est strictement supérieure à 0 et <100, 0 < t ≤ 100.
Vapeur si la température est strictement supérieure à 100, 100 < t.
*/
int main(){
    int nbr,exposant,nbrBackup,exposantBackup;
    
    printf("bonjour; ce program va vous aider à calculer la puissance d'un nombre \nsvp entrez un nombre\n");
    scanf("%d",&nbr);
    nbrBackup=nbr;
    printf("entrez l'exposant\n");
    scanf("%d",&exposant);
    exposantBackup=exposant;
    printf("\nL19:  nbr=%d  exposant=%d",nbr,exposant);

    if(nbr<=0 || exposant<0){
        printf("\nle nombre et l'exposant doivent étre supérieur ou égale 0\n");
    }else{
    	printf("\nL24:  nbr=%d  exposant=%d",nbr,exposant);
        while(exposant>1){
            nbr*=nbrBackup;
            exposant--;
        	printf("\nL28:  nbr=%d  exposant=%d",nbr,exposant);
        }
        printf("\n%d=^%d=%d",nbrBackup,exposantBackup,nbr);
        
    }
  return 0;
}
