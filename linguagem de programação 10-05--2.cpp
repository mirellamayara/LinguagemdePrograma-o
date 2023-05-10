#include <stdio.h>

int main(){
	int escolha;
	printf("Digite 1 para windows ou 2 para Linux:");
	scanf("%d", &escolha);
	switch(escolha){
		case 1:
			printf("Sistema operacional escolhido: Windows");
			break;
		case 2:
			printf("Sistema operacional escolhido: Linux");
			break;
			default:
				printf("Escolha inválida!");
	}
}
