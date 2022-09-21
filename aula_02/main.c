#include <stdio.h>
int main () {
    int x = 10;
    printf("Pares (10/100): do/while\n");
    do {
        printf("Valor de x: %d\n", x);
        x = x + 2;
    }while( x <= 100 );
    return 0;
}