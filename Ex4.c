#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[8], X, Y, i, soma = 0;

  // Lendo as posições do vetor:
  printf("Atribua 8 numeros ao vetor: \n");
  for (i = 0; i < 8; i++) {
    scanf("%d", &vet[i]);
  }
  // Lendo os valores de X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final o programa devera escrever a soma dos valores encontrados nas respectivas posicoes X e Y:
  printf("Digite o valor de X: \n");
  scanf("%d", &X);

  printf("Digite o valor de Y: \n");
  scanf("%d", &Y);

  if (X >= 0 && X < 8 && Y >= 0 && Y < 8) {
    soma = vet[X] + vet[Y];
    printf("A soma dos valores nas posicoes %d e %d eh: %d\n", X, Y, soma);
  } else {
    printf("Os valores de X e Y devem ser maiores ou iguais a 0 e menores que 8.\n");
  }
  return 0;
}