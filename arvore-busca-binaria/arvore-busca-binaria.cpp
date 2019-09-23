#include <stdio.h>
#include <stdlib.h>

/*------------ Arvore de Busca Bin�ria ------------*/
/*
* Neste programa estou implementando
* uma arvore de busca b�naria
*/


typedef struct arvoreBuscaBinaria{
	int conteudo;
	struct arvoreBuscaBinaria *subArvoreEsquerda;
	struct arvoreBuscaBinaria *subArvoreDireita;
}arvore;

/*
Acima estou realizando a defini��o da estrutura

A estrutura b�sica de uma arvore de busca bin�ria
e composta por:
	1- Seu cont�udo;
	2- Sub Arvore da Esquerda
	3- Sub Arvore da Direita
	
typedef - Essa palavra reservada � utilizada para
definir um tipo, assim ao ser utilizada
ela defini que a struct arvoreBuscaBinaria
seja definida como o tipo arvore.

Podemos dizer que ao usar arvore estamos referenciando
a struct arvoreBuscaBinaria	


Outras maneiras de definir uma Struct:
	
	1.
	 
	struct arvoreBuscaBinaria{
	int conteudo;
	struct arvoreBuscaBinaria* subArvoreEsquerda;
	struct arvoreBuscaBinaria* subArvoreDireita;
	};
	typedef struct arvoreBuscaBinaria arvore;
	
	2-
	typedef struct arvoreBuscaBinaria arvore;
	struct arvoreBuscaBinaria{
	int conteudo;
	struct arvore *subArvoreEsquerda;
	struct arvore *subArvoreDireita;
	};
*/



arvore* criaArvore(){
  	return NULL;
}
/*
Instancia um ponteiro NULL, para o n� raiz.
ou seja cria uma arvore vazia.
*/



int arvoreVazia(arvore* texte)
{
  return texte == NULL;
}
/*
Verifica se uma �rvore � vazia
Retorna 1 se a �rvore for vazia
e 0 caso a arvore esteja preenchida
*/

void arvoreVaziaCompleta(arvore* texte)
{
	if(texte == NULL){
		printf("Arvore esta vazia");
	}else{
		printf("Arvore nao esta vazia,\n O valor inicial de sua raiz e %i", texte->conteudo);
	}
}




int main(){
	arvore* a = criaArvore();
	int informaVazia = arvoreVazia(a);
	printf("%i\n", informaVazia);
	arvoreVaziaCompleta(a);
}

