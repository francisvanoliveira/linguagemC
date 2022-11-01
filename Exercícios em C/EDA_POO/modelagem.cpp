#define MAX 50

typedef int TIPOCHAVE;
typedef struct {
  TIPOCHAVE chace;
  //outros campos
} REGISTRO

typedef struct {
  REGISTRO A[MAX];
  int nroElem;
} LISTA;

void inicializarLista(LISTA* l) {
  l->nroElem = 0;
}

void exibirLista(LISTA* l){
  int i;
  printf("Lista: \n");
  for(i=0; i< l->nroElem; i++)
    printf("%i ", l->A[i].chave);
}