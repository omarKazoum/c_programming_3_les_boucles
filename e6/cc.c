#include <stdio.h>
#include<stdbool.h>
/***
Challenge 6 :

Dans cet exercice on va procéder de la manière suivante: on parcourt avec une boucle for de compteur p, les entiers entre 2 et n, n étant le nombre entré par l’utilisateur (ligne 9).
Et, à chaque fois on fait un test de primalité sur p (lignes 11-15), s'il s’avère qu’il est premier on l'affiche sur le champ.

*/
int main()
{
    int n;
    printf("bonjour chere utlisateur ce programme vous permet d'affiche les nombres premier situes entre 2 et un autre nombre de votre choix\nsvp tapez un nombre entier\n");
    scanf("%d",&n);
    printf("les nombres premier situez entre 2 et %d sont:\n",n);
    for(int p=2;p<=n;p++){
        bool isPrime=true;
        for(int i=2;i<p-1;i++){
            if((p%i)==0){
                isPrime=false;
                break;
            }
        }

        if(isPrime/*is a prime number*/)
            printf("%d ",p);
    }
  
    return 0;
}