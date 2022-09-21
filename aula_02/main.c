#include <stdio.h>
int main() {
    int cont;
    printf("Pares (10 e 100): for\n");
    for(cont=8; cont<=98; cont=cont+2){
        printf("Valores (controle | exibição): %d e %d\n", cont,cont+2);
    }
    return 0;
}