#include <stdio.h>
int main(){
    // Inicializa variáveis de votação
    float Bolsonaro=0, Ciro=0, Lula=0, Tebet=0, Branco=0, Nulo=0, Total=0, Validos=0;
    int voto;
    do {
        printf("Simulação Eleitoral Simplificada\n");
        printf("Escolha entre os candidatos abaixo, em ordem numérica:\n");
        printf("Ciro (12), Lula (13), Tebet (15), Bolsonaro (22), Branco (66), Nulo (99)\n");
        printf("Digite o número de sua escolha ou 0 (zero) para finalizar: ");
        scanf("%d",&voto);
        Total++;
        switch (voto) {
            case 12:
                Ciro++;
                Validos++;
                break;
            case 13:
                Lula++;
                Validos++;
                break;
            case 15:
                Tebet++;
                Validos++;
                break;
            case 22:
                Bolsonaro++;
                Validos++;
                break;
            case 66:
                Branco++;
                break;
            case 99:
                Nulo++;
                break;
            case 0:
                break;
            default:
                printf("Escolha inválida!\n");
        }
    } while (voto != 0);
    printf("Total de votos: %.0f\n",Total-1);
    printf("Total de votos válidos: %.0f\n",Validos);
    printf("Tebet: %.2f",(Tebet/Validos)*100);
    return(0);}