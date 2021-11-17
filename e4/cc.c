#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/**
Challenge 4 :
Ecrire un programme C qui lit une série d'entiers positifs inférieurs à 100 terminée par 0.
 Et qui doit négliger toute entrée strictement supérieure à 100.
Puis calcule et affiche la somme et le max des éléments de cette série.

*/
void printArr(int ar[],int length);

int main(){
    // take a 100 integers from the user
    int nbrs[10];
    int nbrEntree=0,nbrEntreeCount=0;
    bool error=false;
    // on prend les entrees
    printf("Bonjour utlisateur ce programme vous aide a organiser une serie de nombres entiers qui sont entre 0 et 100\n");
    while(nbrEntreeCount<100){
          if(error){
            printf("il faut que le nombre soit entre 1 et 100\n");
            error=false;
          }
            printf("entrez le %d%s nombre ",nbrEntreeCount+1,((nbrEntreeCount+1)==1?"er ":"eme"));
            scanf("%d",&nbrEntree);
            if(nbrEntree==0){
              //if 0 stop data entry
                printf("entree arrete\n");
                break;
            }
            else if(nbrEntree<0 || nbrEntree>100){
              //if the number is not between 0 and 100 display the error
                error=true;
            }else{
                nbrs[nbrEntreeCount]=nbrEntree;
                nbrEntreeCount++;
            }
    }
    //printf("numbers intered are:");
    //printArr(nbrs,nbrEntreeCount);
    // on calcule la somme et on l'affiche
    int somme=0;
    int max=0;
    for(int i=0;i<nbrEntreeCount;i++){
      max=nbrs[i]>max?nbrs[i]:max;
      somme+=nbrs[i];
    } 
    printf("\nla somme est:%d",somme);
    printf("\nle max est: %d",max);
    // on cherche le max et on l'affiche 
    

  return 0;
}

void printArr(int ar[],int length){
    printf("\n");
    for(int i=0;i<length;i++)
        printf("%d ",ar[i]);
    printf("\n");
}