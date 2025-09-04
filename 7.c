#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Entrer un nombre : ");
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        int valeur = i * i;
        int model = valeur % 2;
        if( valeur > x){
            break;
        }
        if ( model == 0 ){
            printf("%d\n",valeur);
        }

    }
    return 0;
}
