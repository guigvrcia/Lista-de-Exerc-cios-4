/*. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado dos componentes deste vetor, armazenando o resultado em outro vetor. 
Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  double vetA[10], vetB[10], vetC[10];

  // Lê o conjunto A:

  for(i = 0; i < 10; i++) {
    printf("Digite o valor na posicao %d do conjunto A: ", i);
    scanf("%lf", &vetA[i]);
  }

  // Lê o conjunto B:

  for (i = 0; i < 10; i++) {
    printf("Digite o valor na posicao %d do conjunto B: ", i);
    scanf("%lf", &vetB[i]);
  }

  // Calcular o quadrado dos conjutos dos vetores A e B para armazenar em outro vetor:

  for(i = 0; i < 10; i++) {
    vetC[i] = (vetA[i] * vetA[i]) + (vetB[i] * vetB[i]);
    printf("O quadrado do componente na posicao %d eh: %.1lf\n", i, vetC[i]);
  }

  // Imprimir todos os conjuntos:

  printf("Os conjuntos utilizados nesse programa foram:\n");
  printf("Conjunto A: ");
  for (i = 0; i < 10; i++) {
    printf("%.1lf ", vetA[i]);
  }
  printf("\n");

  printf("Conjunto B: ");
  for (i = 0; i < 10; i++) {
    printf("%.1lf ", vetB[i]);
  }
  printf("\n");

  printf("Conjunto C: ");
  for (i = 0; i < 10; i++) {
    printf("%.1lf ", vetC[i]);
  }
  printf("\n");
  return 0;
}