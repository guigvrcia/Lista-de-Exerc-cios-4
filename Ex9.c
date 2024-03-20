#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[15], i, soma = 0;

  printf("Digite as notas dos 15 alunos: \n");
  for (i = 0; i < 15; i++) {
  printf("A nota do %d aluno eh: ", i +1);  
  scanf("%d", &vet[i]);
  soma += vet[i];
  }
  float media = 0;
  for (i = 0; i < 15; i++) {
    media = media + vet[i];
  }
  media = soma / 15;
  printf("A media geral das notas dos alunos eh: %.2f\n", media);

  return 0;
}