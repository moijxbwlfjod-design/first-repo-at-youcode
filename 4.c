#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter un nombre ne entre 0 et 100 : ");
    scanf("%d", &n);
    int re = n / 10;
    switch (re){
    case 0:
        printf("F");
    case 1:
        printf("F");
    case 2:
        printf("F");
        break;
    case 3:
        printf("F");
        break;
    case 4:
        printf("F");
        break;
    case 5:
        printf("F");
        break;
    case 6:
        printf("D");
        break;
    case 7:
        printf("C");
        break;
    case 8:
        printf("B");
        break;
    case 9:
        printf("A");
        break;
    case 10:
        printf("A");
        break;
    default:
        printf("Entrer un nombre entre 0 et 100.");
        break;
    }
    return 0;
}
