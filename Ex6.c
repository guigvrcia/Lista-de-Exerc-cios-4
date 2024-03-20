#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[10] = {0}, i;

  printf("Digite 10 valores para atribuir ao vetor: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vet[i]);
  }

  int maiorvalor = vet[0], menorvalor = vet[0];

  for (i = 0; i < 10; i++) {
    if (vet[i] > maiorvalor) {
      maiorvalor = vet[i];
    } 
    if (vet[i] < menorvalor) {
      menorvalor = vet[i];
    }
  }

  printf("O maior valor digitado dentro do vetor eh: %d\n", maiorvalor);
  printf("O menor valor digitado dentro do vetor eh: %d\n", menorvalor);

  return 0;
}