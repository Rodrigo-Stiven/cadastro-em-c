#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 200

//--- Campo para cria��o de variaveis ---// 

char nome [SIZE] [50];
char email [SIZE] [50];
int mat [SIZE]; // Variavel matricula
char adm [SIZE] [20]; // Variavel admiss�o
float  sal [SIZE]; // variavel sal�rio
int op ; // Variavel onde o usuaria ir� colocar o numero para a opera��o desejada
int matPesquisa;
int i;

//--- T�rmino do Campo para cria��o de variaveis ---// 

//---- Campo para cria��o das fun��es----//
void menu ();
void cadastro();
void pesquisa();
void lista();

//---- T�rmino do  Campo para cria��o das fun��es----//

int main (void) {
	setlocale(LC_ALL, "Portuguese"); // Para admitir que o compilador coloque os acentos.

	   	menu();
	   	return 0;

}

void menu(){
	do{
		system("cls");
		printf("\n---MENU----\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair\n");
		printf("Digite a op��o desejada: ");
		scanf("%d", &op);
		switch(op) {
	  		case 1 :
	  			cadastro();
	  			break;
	  		case 2 :
	  			lista();
	  			break;	
	  		case 3 :
			  	pesquisa();
				  break;
			case 4 :
				system("exit");
				break;	 
			default :
			printf("Op��o inv�lida");
			getchar();	
			getchar();
		}
	}while(op!=4);
}

void lista() {
	int i;
	for (i = 0; i < SIZE; i++) {
	  if(mat[i] > 0){
		 printf("\nNome: %s\nEmail: %s\nMatricula: %d\nData de admiss�o: %s\nSal�rio: %f", nome[i], email[i], mat[i], adm[i], sal[i] );
	   } else {
	   		break;
	    }
	} 
	getchar();
	getchar();
}

void cadastro (){ // Aqui inicia a fun��o de cadastro
    static int  linha ;
    do {
        printf("\nDigite o nome: ");
            scanf("%s", &nome[linha]);
        printf("\nDigite o email: ");
            scanf("%s", &email[linha]);
        printf("\nDigite a matr�cula: ");
            scanf("%d", &mat[linha]);
        printf("\nDigite a data de admiss�o: ");
            scanf("%s", &adm[linha]);
        printf("\nDigite o sal�rio: ");
            scanf("%f", &sal[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair");
            scanf("%d", &op);
             linha ++;
    } while (op == 1);
} // Termino da fun��o de cadastro

void pesquisa(){
	do{
		printf("\nDigite 1 para pesquisar pela Matricula do funcion�rio 2 para voltar ao inicio: ");
			scanf("%d", &op);
		switch(op){
			case 1 :
				printf("\nDigite a Matricula: ");
				scanf("%d", &matPesquisa);
				for(i=0; i < SIZE; i++)
					if(mat[i] == matPesquisa){
						printf("\nNome: %s\nEmail: %s\nMatricula: %d\nData de admiss�o: %s\nSal�rio: %f", nome[i], email[i], mat[i], adm[i], sal[i] );
					}
				break;
			case 2 :
				 menu();
				break;
			default:
				printf("\nOpc�o Inv�lida");
				break;
		}		
		printf("\nDigite 1 para continuar na �rea de pesquisa : ");
			scanf("%d", &op);
	}while(op == 1);
}
