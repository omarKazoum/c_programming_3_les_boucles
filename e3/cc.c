#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/**
Challenge 3 :
    acrire un programme qui determien si un nombre est premier ou non

*/

int main(){
    int nbr;
    bool premier=true;
    printf("bonjour chere utilisateur ce programme vous aide a determiner si un nombre de votre choix est premier ou non\nsvp entrez un nombre entier\n");
    scanf("%d",&nbr);

    for(int i=2;i<nbr;i++){
        if(nbr%i==0){
            premier=false;
            break;
        }
    }
    printf("\nle nombre %d %s",nbr,(premier?"est premier":"n'est pas premier"));


  return 0;
        }
