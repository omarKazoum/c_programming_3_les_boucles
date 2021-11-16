#include <stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("entrez le compteur\n");
    scanf("%d",&n);
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