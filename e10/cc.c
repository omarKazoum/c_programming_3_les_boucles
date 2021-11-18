#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/**
Challenge 10 :
Ecrivez un programme en C pour calculer la somme du maximum de 10 nombres en ignorant les nombres négatifs du calcul.
*/
void printArr(int ar[],int length);

int main(){
    // take a 100 integers from the user
    int nbrMaxDesEntrees=10;
    int nbrs[nbrMaxDesEntrees];
    int nbrEntree=-1,nbrEntreeCount=0;
    bool error=false;
    int valideNbr=0;
    // on prend les entrees
    printf("Bonjour utlisateur ce programme vous aide a traiter dix nombres de votre choix\n");
    while(nbrEntreeCount<nbrMaxDesEntrees){
            printf("entrez le %d%s nombre ",nbrEntreeCount+1,((nbrEntreeCount+1)==1?"er ":"eme"));
            scanf("%d",&nbrEntree);
                nbrs[nbrEntreeCount]=nbrEntree;
                nbrEntreeCount++;
    }
    // on calcule la somme en ignorant les nombres neagtif et le max on les affiche
    int somme=0;
    int max=0;
    for(int i=0;i<nbrEntreeCount;i++){
        if(nbrs[i]>0){
          max=nbrs[i]>max?nbrs[i]:max;
          somme+=nbrs[i];
      }
    } 
    printf("\nla somme est:%d",somme);
    printf("\nle max est: %d",max);

  return 0;
}
