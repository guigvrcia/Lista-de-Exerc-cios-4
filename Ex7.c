#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, vet[10], maiorp = 0, posi = 0;

  printf("Digite 10 numeros inteiros para atribuir ao vetor: \n");
  for(i = 0; i < 10; i++) {
    scanf("%d", &vet[i]);

    if (i == 0 || vet[i] > maiorp) {
      maiorp = vet[i];
      posi = i;
    }
  }
  printf("O vetor eh composto por: \n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");

  printf("O maior elemento dentro do vetor eh: %d e ele se encontra na posicao: %d\n", maiorp, posi);

  return 0;
}