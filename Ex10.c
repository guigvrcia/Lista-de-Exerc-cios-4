#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[6], i;

  printf("Digite 6 valores inteiros para atribuir ao vetor: \n");
  for (i = 0; i < 6; i++)
  {
  printf("Digite o %d valor: \n", i + 1);
  scanf("%d", &vet[i]);
  }
  printf("Os valores na forma inversa ficam: \n");
  for (i = 5; i >= 0; i--) {
  printf("%d\n", vet[i]);
  }
  return 0;
}