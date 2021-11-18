#include <stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
/*
    Challenge 8 :

Ecrire un programme C qui utilise le principe de dichotomie 
pour trouver la solution de l'équation x3+12x2+1=0 dans l'intervalle [-15,-10] avec une précision de 0,00001.
*/
float fX(float x);
int main()
{
    float precision=1,precesionSouhaite=0.00001;
    printf("bonjour chere utilisateur ce programme a pour mission chercher la solution de l'equation X^3 + 12 x X^2 + 1 = 0\n");
    float a=-15,b=-10,middle;
    //on va vérifier si les images des deux valeur a et b ont des signes diffirents
    //tant que la precision souhaité n'est pas atteint
    while(precision>precesionSouhaite){
       middle=(a+b)/2;
       if(fX(a)*fX(middle)<=0)
            b=middle; 
        else a=middle;
        precision=a-b;
        precision=precision>0?precision:-precision;
        printf("\nprecision reached: %f",precision);
    }
    printf("\ndonc la soulution est situe entre %d et %d",a,b);



    return 0;
}

float fX(float x){
    return pow(x,3)+12*pow(x,2)+1;
}
