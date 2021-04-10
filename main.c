#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 200

//--- Campo para criação de variaveis ---// 

char nome [SIZE] [50];
char email [SIZE] [50];
int mat [SIZE]; // Variavel matricula
char adm [SIZE] [20]; // Variavel admissão
float  sal [SIZE]; // variavel salário
int op ; // Variavel onde o usuaria irá colocar o numero para a operação desejada
int matPesquisa;
int i;

//--- Término do Campo para criação de variaveis ---// 

//---- Campo para criação das funções----//

void cadastro();
void pesquisa();
//void lista();

//---- Término do  Campo para criação das funções----//

int main (void) {
	setlocale(LC_ALL, "Portuguese"); // Para admitir que o compilador coloque os acentos.
	
    cadastro();
    pesquisa();
}

void cadastro (){ // Aqui inicia a funï¿½ï¿½o de cadastro
    static int  linha ;
    do {
        printf("\nDigite o nome: ");
            scanf("%s", &nome[linha]);
        printf("\nDigite o email: ");
            scanf("%s", &email[linha]);
        printf("\nDigite a matrícula: ");
            scanf("%d", &mat[linha]);
        printf("\nDigite a data de admissão: ");
            scanf("%s", &adm[linha]);
        printf("\nDigite o salário: ");
            scanf("%f", &sal[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair");
            scanf("%d", &op);
             linha ++;
    } while (op == 1);
} // Termino da função de cadastro

void pesquisa(){
	do{
		printf("\nDigite 1 para pesquisar pela Matricula do funcionário 2 para voltar ao inicio");
			scanf("%d", &op);
		switch(op){
			case 1 :
				printf("\nDigite a Matricula: ");
				scanf("%d", &matPesquisa);
				for(i=0; i < SIZE; i++)
					if(mat[i] == matPesquisa){
						printf("\nNome: %s\nEmail: %s\nMatricula: %d\nData de admissão: %s\nSalário: %f", nome[i], email[i], mat[i], adm[i], sal[i] );
					}
				break;
			case 2 :
				printf("\nDigite a Matricula: ");
				//Colocar para voltar ao menu
				break;
			default:
				printf("\nOpcão Inválida");
				break;
		}		
		printf("\nDigite 1 para coninuar na área de pesquisa");
			scanf("%d", &op);
	}while(op == 1);
}
