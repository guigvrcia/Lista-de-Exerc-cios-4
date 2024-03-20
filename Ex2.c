/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int vet[6];

  printf("Digite os numeros para atribuir ao vetor: \n");
  for (i = 0; i < 6; i++) {
    scanf("%d", &vet[i]);
  }

  printf("\nOs numeros digitados foram:\n");
  for (i = 0; i < 6; i++) {
    printf("Na posicao %d o numero digitado foi: %d\n", i, vet[i]);
  }

  return 0;
}