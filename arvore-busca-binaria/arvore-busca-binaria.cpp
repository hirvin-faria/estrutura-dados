#include <stdio.h>
#include <stdlib.h>

/*------------ Arvore de Busca Binária ------------*/
/*
* Neste programa estou implementando
* uma arvore de busca bínaria
*/


typedef struct arvoreBuscaBinaria{
	int conteudo;
	struct arvoreBuscaBinaria *subArvoreEsquerda;
	struct arvoreBuscaBinaria *subArvoreDireita;
}arvore;

/*
Acima estou realizando a definição da estrutura

A estrutura básica de uma arvore de busca binária
e composta por:
	1- Seu contéudo;
	2- Sub Arvore da Esquerda
	3- Sub Arvore da Direita
	
typedef - Essa palavra reservada é utilizada para
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
Instancia um ponteiro NULL, para o nó raiz.
ou seja cria uma arvore vazia.
*/



int arvoreVazia(arvore* texte)
{
  return texte == NULL;
}
/*
Verifica se uma árvore é vazia
Retorna 1 se a árvore for vazia
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

