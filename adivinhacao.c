#include <stdio.h>

//#define NUMERO_DE_TENTATIVAS 3

int main(){
	
	//Imprime cabeçalho do jogo
	printf("****************************************\n");
	printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
	printf("****************************************\n");
	
	int numeroSecreto = 42;
	int chute, i;
	int tentativas = 1;
	
	while(1) {
		
			//loop for: quando sabemos a quantidade de vezes que o programa deve executar.
	//for(i = 1; i <= NUMERO_DE_TENTATIVAS ; i++) {
		
			printf("Tentantiva %d\n", tentativas);
		printf("Qual e o seu chute? ");
		
		scanf("%d", &chute);
		printf("Seu chute foi >>> %d\n", chute);	
		
		if(chute < 0){
			printf("Voce nao pode chutar numeros negativos\n");
			
			continue;
		}	
	
		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
		
		if(acertou){
			printf("Muito bem, voce acertou!\n");
			printf("Jogue novamente, voce e um bom jogador!\n");
			
			break;
		} 
		else if(maior){
			printf("Seu chute foi maior que o numero secreto\n");
		}
		
		else {
			printf("Seu chute foi menor que o numero secreto\n");
		}
		
		tentativas++;	
	}
	
	printf("Fim de jogo!\n");
	printf("Voce acertou em %d tentativas!", tentativas);
			
}



