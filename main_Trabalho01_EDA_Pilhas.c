#include "Matriz.h"
#include "PilhaGenerica.h"
#include <stdio.h>
#include <stdlib.h>

int main (){
    Matriz matrizOriginal, matrizModificada;
	PilhaGenerica pilha;
	int x, y, corNova;
	int escolha = 0;

	inicializa_pilha(&pilha, 100, sizeof(int));	
	

	while(escolha != 4){
		printf("Escolha uma opcao:\n[1]Mostra matriz original\n[2]Pintar(trocar os numeros)\n[3]Mostra matriz modificada\n[4]Sair\n");
		scanf("%d", &escolha);
		
		switch(escolha){
				case 1:{
					carrega_arquivo("matrizOriginal.txt", &matrizOriginal);
					mostra_matriz(matrizOriginal);
					break;
				}
			
				case 2:{
					printf("Digite a coordenada x:");
					scanf("%d", &x);
			    	printf("Digite a coordenada y:");
					scanf("%d", &y);
					printf("Digite a cor nova:");
					scanf("%d", &corNova);
									
					if (matrizOriginal.dados[x][y] != corNova){
						printf("entrou no if");//não pinta nada então nem chega a entrar no if
						matrizModificada.dados[x][y] = corNova;
						
						empilha(&pilha, &matrizModificada.dados[x][y]);
						mostra_matriz(matrizModificada);
						//pelo o que parece não está empilhando, não mostra nada
					}
					
					break;
				}
				
				case 3:{
					
					break;
				}
				
				case 4:{
					
					break;
				}
				
				default:{
					printf("Opção invalida");
					break;
				}
		}
	}
	
//	
//	inicializa_matrizOriginal(); //arquivo txt
//	mostra_matrizOriginal <- M
//	
//	while (){
//		desempilha();
//		   if(matrizOriginal(x,y) != corNova){
//		   	matrizOriginal (x,y) <- cor
//		   	   if(matrizOriginal)
//		   }
//	}
//	
//	mostra_matrizModificada();
//	
    return 0;
}