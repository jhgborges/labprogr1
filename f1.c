#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 10

void inicia_vetor(int v[tamanho], int x){
    int y;
    for(y=0; y < x; y++)
        v[y] = rand()%100;
}

int procura_elemento(int v[tamanho], int x, int busca){
    int achou = 0;
    int posicao;

    for(posicao = 0; posicao < x; posicao ++){
        if(v[posicao] == busca){
            achou = 1;
            return posicao;
        }
    }
    return -1;
}

int main(){
    int achou, busca, vetor[tamanho];
    srand(time(0));
    inicia_vetor(vetor,tamanho);
    for(int i=0; i < tamanho; i++)
        printf("v[%2d]: %2d\n",i+1,vetor[i]);
    printf("Procura por qual valor? ");
    scanf("%d",&busca);
    achou = procura_elemento(vetor,tamanho,busca);
    if(achou == -1)
        printf("Elemento não encontrado!\n");
        else
        printf("Elemento encontrado na posição %d!\n",achou+1);
}

