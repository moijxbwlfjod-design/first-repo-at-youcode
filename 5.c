#include <stdio.h>
#include <math.h>

int main(void) {
    int m,n,gcd;
    printf("Entrer la fraction de Deux nombre (m//n): ");
    scanf("%d//%d",m,n);


    printf("Entrer Deux Nombre : ");
    scanf("%d %d", &m, &n);
    if ( n == 0){
        for (int i = 1; i <= m; i++){
            int a = m % i;
            if (a == 0){
                gcd = i;
            }
        }
    }

    if ( m == 0){
        for (int i = 1; i <= n; i++){
            int a = n % i;
            if (a == 0){
                gcd = i;
            }
        }
    }

    if (n >= m){
        for (int i = 1; i <= n; i++){
            int var = n % m;
            if (var == 0){
                gcd = n;
            }
            m = n;
            n = var;


    }

    }

        if (m >= n){
        for (int i = 1; i <= m; i++){
            int var = m % n;
            if (var == 0){
                gcd = var;
            }
            n = m;
            m = var;


    }

    }


    int mm = m/gcd;
    int nn = n/gcd;
    printf("Le resultats est : %d/%d",mm,nn);

    return 0;
}
