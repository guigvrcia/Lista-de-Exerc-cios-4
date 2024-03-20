/*Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 
O programa deve executar os seguintes passos: 

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posicao o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // A
  int vetA[6] = {1, 0, 5, -2, -5, 7};
  
  // B
  int soma = vetA[0] + vetA[1] + vetA[5];
  printf("O valor das soma dos valores posicionados nas posicoes 0, 1 e 5 é: %d\n", soma); 

  // C
  vetA[4] = 100;

  //D
  for (int i = 0; i < 6; i++) {
    printf("O valor atribuido na posicao %d eh: %d\n", i, vetA[i]);
  }
  printf("\n");

  return 0;

}