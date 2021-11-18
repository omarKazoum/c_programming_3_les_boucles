#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/*
    Ecrire un algorithme qui demande un nombre à l’utilisateur,
    puis affiche sa table de multiplication de 1 à 10
*/
int main(){
    
    int nbr;
    printf("bonjour cher utilisateur ce programme va vous aider a afficher la table de mutiplication d'un nombre de votre choix\nsvp entrez un nombre\n");
    scanf("%d",&nbr);
    printf("la table de multiplication de %d est comme suit\n",nbr);
    for(int i=1;i<=10;i++){
        // ici on calcule le resultat de multiplication et on l'affiche
        printf("%d x %d = %d\n",nbr,i,nbr*i);

    }
  return 0;
}

