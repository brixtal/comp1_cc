#include <stdio.h>
#include <stdlib.h>

typedef struct _LISTA LISTA;

struct _LISTA {
  int elemento;
  LISTA *prox;
};

void insere(int elem, LISTA *list) {
  LISTA *nova;
  nova = (LISTA *)malloc(sizeof(LISTA));
  nova->elemento = elem;
  nova->prox = list->prox;
  list->prox = nova;
}

void imprime(LISTA *list) {
  LISTA *l;
  for (l = list->prox; l != NULL; l = l->prox)   {
    printf("%d ", l->elemento);
  }
  printf("\n");
}

void busca_e_remove (int y, LISTA *le) {
   LISTA *p, *q;
   p = le;
   q = le->prox;
   while (q != NULL && q->elemento != y) {
      p = q;
      q = q->prox;
   }
   if (q != NULL) {
      p->prox = q->prox;
      free (q);
   }
}

void busca_e_insere (int x, int y, LISTA *le) {
   LISTA *p, *q, *nova;
   nova = malloc (sizeof (LISTA));
   nova->elemento = x;
   p = le;
   q = le->prox;
   while (q != NULL && q->elemento != y) {
      p = q;
      q = q->prox;
   }
   nova->prox = q;
   p->prox = nova;
}

int main(void) {

  int elem, valor, antes;
  char operacao;
  LISTA *lista = NULL;
  lista = (LISTA *)malloc(sizeof(LISTA));
  lista->prox = NULL;

  while (1)  {
    scanf("%d", &elem);
    if(elem < 0){      
      break;
    }
    insere(elem, lista);
  }

  while(1){    
    scanf("%c", &operacao);
    if(operacao == 'R'){     
        scanf("%d ", &valor);
        busca_e_remove(valor, lista);         
    } else if(operacao == 'I') { 
      scanf("%d ", &valor);
      scanf("%d ", &antes);
      busca_e_insere(antes, valor, lista);
    } else if(operacao == 'X'){
        break;
    }
  }

  imprime(lista);

  return 0;
}