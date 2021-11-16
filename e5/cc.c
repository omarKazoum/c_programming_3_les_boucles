#include <stdio.h>
/**Challenge 5:
    Ecrire un programme C qui lit un entier et l'affiche inversé. On choisira de ne pas afficher chiffre par chiffre mais de construire l'entier inversé puis l'afficher.
    Ex: si l'entrée est 12345 on doit afficher l'entier 54321.
 */
int main()
{
    int nbr,reversed=0;
    printf("entrez un nombre\n");
    scanf("%d",&nbr);
    printf("l'inverse de %d",nbr);
    while(nbr!=0){
        int lastDigit=nbr%10;
        reversed=reversed*10+lastDigit;
        nbr/=10;
    }
    printf("est %d\n",reversed);
  
    return 0;
}