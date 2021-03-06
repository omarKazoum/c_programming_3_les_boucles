#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/*
    Challenge 2: pyramide d'étoile
Ecrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.
(chaque ligne doit avoir un nombre premier d'étoiles
*/

/**
 gives the next positif prime number
*/
int nextPrime(int p);
/**
*tells weather a number is prime or not
*/
bool isPrime(int nbr);
/**
prints the array given 
*/
void printArr(int ar[],int length);
int main(){
    int nbrLigne;
    printf("Bonjour ce program vous aide a construire un pyramide d'etoile \nsvp entrez la hauteur du pyramide a contruire pour vous\n");
    scanf("%d",&nbrLigne);
    // collecting as many primes as the number of ilnes requested
    int primes[nbrLigne];
    for(int i=0;i<nbrLigne;i++)
    {
        if(i==0)
        primes[i]=nextPrime(2);
        else
            primes[i]=nextPrime(primes[i-1]);
    }
        //printArr(primes,nbrLigne);
        int maxNbrOfCols=primes[nbrLigne-1];
        
        for(int l=0;l<nbrLigne;l++){
            int halfSize=primes[l]/2;
            int middle=maxNbrOfCols/2;
            //starsCount is the number of stars to draw in this line
            for(int col=0;col<maxNbrOfCols;col++){
                int distanceFromMiddle=middle-col;
               distanceFromMiddle=distanceFromMiddle<0?-1*distanceFromMiddle:distanceFromMiddle;
                    if(distanceFromMiddle<=halfSize)
                        printf("*");
                        else printf(" ");

            }
            printf("\n");
        }
        
  return 0;
}

int nextPrime(int n){
    n++;
    while(true){
        if(isPrime(n))
            return n;
        n++;
    }
}
// reliability checked
bool isPrime(int nbr){
    if(nbr==0 || nbr==1)
        return false;
    for(int i=2;i<nbr;i++){
        if(nbr%i==0)
            return false;
    }
    return true;
}

void printArr(int ar[],int length){
    printf("\n");
    for(int i=0;i<length;i++)
        printf("%d ",ar[i]);
    printf("\n");
}

/*
halfSize=prime/2    ex 3/2 = 1
middle=maxCols/2;
distanceFromMiddle=middle-col;
distance=distanceFromMiddle<0?-distanceFromMiddle:distanceFromMiddle;
if(distanceFromMiddle<=halfSize)
    printf("*")
    else printf(" ");
*/