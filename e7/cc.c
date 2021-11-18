#include <stdio.h>
#include<stdbool.h>
#include<ctype.h>
/*
Challenge 7 :
Ecrire un programme C qui calcule le nième terme de la suite de Fibonacci,
 définie comme suit: Un=Un-1+Un-2 où U1=U0=1
*/

int main()
{
    int first,second,third;
    int n;
    printf("entrer le nombre n\n");
    scanf("%d",&n);
    printf("calcule de %d%s terme de la suite de Fibonacci\n en cours ...",n,(n==1)?"er":"eme");
    if(n==0){
        third=0;
    }else if(n==1){
        third=1;
    }else{
        first=0,second=1;
        for(int i=2;i<=n;i++){
              third=first+second;
              first=second;
              second=third;
        }
    }
    printf("\nU%d = %d\n",n,third);
    return 0;
}
