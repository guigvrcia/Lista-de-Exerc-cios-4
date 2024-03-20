#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[6], i;

  printf("Digite 6 valores inteiros para atribuir ao vetor: \n");
  for (i = 0; i < 6; i++) {
    do {
      printf("Valor %d: ", i + 1);
      scanf("%d", &vet[i]);
      if (vet[i] %2 != 0) {
        printf("O valor digitado nao eh par, portanto, invalido. Por favor, Tente novamente.\n");
      }
    } while (vet[i] % 2 != 0);
  }

  printf("\nValores em ordem inversa:\n");
  for (i = 5; i >= 0; i--) {
    printf("%d\n", vet[i]);
  }
  return 0;
}
