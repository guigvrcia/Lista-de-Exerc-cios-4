/*Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[10], i, pares[10], mostrarpar = 0, quantpar = 0;

// Verifica a qunatidade de valores pares digitados:
  printf("Digite 10 valores para atribuir ao vetor: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vet[i]);
    if (vet[i] % 2 == 0) {
      pares[mostrarpar++] = vet[i];
      quantpar++;
    }
  }
// Mostra os valores pares digitados:
  for (i = 0; i < mostrarpar; i++) {
    printf("O valor par digitado foi: %d\n", pares[i]);
  }
  printf("O conjunto possui %d numeros pares. \n", quantpar);
  return 0;
}