#include <stdio.h>
int main(){
	// Incializa variáveis de votação
	int Bolsonaro=0, Ciro=0, Lula=0, Tebet=0, Branco=0, Nulo=0;
	int voto;
	do {
		printf("Simulação Eleitoral Simplificada\n");
		printf("Escolha entre os candidatos abaixo, em ordem numérica:\n");
		printf("Ciro (12), Lula (13), Tebet (15), Bolsonaro (22), Branco (66), Nulo (99)\n");
		printf("Digite o número de sua escolha ou 0 (zero) para finalizar: ");
		scanf("%d",&voto);
		switch (voto) {
			case 12:
				Ciro++;
				break;
			case 13:
				Lula++;
				break;
			case 15:
				Tebet++;
				break;
			case 22:
				Bolsonaro++;
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
	// Coloque aqui o código da apuração dos votos.
	return(0);}