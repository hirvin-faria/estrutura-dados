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



void arvoreVaziaCompleta(arvore *texte)
{
	if(texte == NULL){
		printf("\nArvore esta vazia");
	}else{
		printf("\nArvore nao esta vazia\nO valor inicial de sua raiz e %i", texte->conteudo);
	}
}
/*
Está função faz o teste para verificar se a arvore está vazia
Ela recebe como parametro o tipo arvore
Verifica se a texte e igual a NULL
Caso seja igual então a arvore esta vazia,
Se não a arvore não é vazia
e a função imprime o valor raiz da arvore
acessando o parametro conteudo
*/



void inserir(arvore* *local, int conteudoInserido){
	if(*local == NULL){
		*local = (arvore*)malloc(sizeof(arvore));
		(*local)->subArvoreEsquerda = NULL;
		(*local)->subArvoreDireita = NULL;
		(*local)->conteudo = conteudoInserido;
	}else{
		if(conteudoInserido < (*local)->conteudo){
			inserir(&(*local)->subArvoreEsquerda, conteudoInserido);
		}else{
			inserir(&(*local)->subArvoreDireita, conteudoInserido);
		}
	}
}
/*
Esta função insere um valor dentro da arvore
Primeiro verifica se a arvore é vazia
Caso a arvore seja vazia a função
instancia uma nova arvore
e define os valores para a subArvoreDireita e subArvoreEsquerda para NULL
após aplica o novo conteudo que está sendo inserido no conteudo da arvore

Caso o local não seje NULL.
A função verifica se o conteúdo inserido e menor ou maior
Caso seja menor ele percorre a subArvoreEsquerda e chama uma recursão
E se for maior ele percorre a subArvoreDireita e chama a recursão

A recursão ira instanciar uma nova subArvore que será uma folha apontando para NULL
quando chegar a uma das folhas da arvore.
*/



void imprimir(arvore *local){
	if(local != NULL){
		imprimir(local->subArvoreEsquerda);
		printf("\n%i", local->conteudo);
		imprimir(local->subArvoreDireita);
	}
}
/*
Esta função faz a impressão da arvore em ordem
primeiro imprimindo a subArvoreEsquerda e após a subArvoreDireita.
*/



int main(){
	arvore *a = criaArvore();
	int informaVazia = arvoreVazia(a);
	printf("%i\n", informaVazia);
	
	arvoreVaziaCompleta(a);
	
	inserir(&a, 5);
	inserir(&a, 8);
	inserir(&a, 2);
	
	arvoreVaziaCompleta(a);
	
	imprimir(a);
}

